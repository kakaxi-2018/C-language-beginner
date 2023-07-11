#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "aa.data"

#define F_PRINT_ERR(e)              \
    do                              \
    {                               \
        if (NULL == e)              \
        {                           \
            printf("open error\n"); \
            exit(-1);               \
        }                           \
    } while (0)

typedef struct student
{
    char name[30];
    char sex;
    int age;
    double score;
} Stu;

typedef struct _stuNode
{
    Stu data;
    struct _stuNode *next;
} StuNode;

void intitData2File()
{
    Stu s[] = {
        {"liudehua", 'm', 25, 95.0},
        {"zhangxueyou", 'f', 19, 90.0},
        {"liming", 'm', 22, 88.0},
        {"guofucheng", 'f', 18, 88.0}
    };

    FILE *pf = fopen(FILENAME, "w");
    F_PRINT_ERR(pf);

    fwrite((void *)s, sizeof(s), 1, pf);

    fclose(pf);
    return;
}

StuNode * createList()
{
    StuNode *head = (StuNode *)malloc(sizeof(StuNode));

    if (NULL == head)
    {
        exit(-1);
    }

    head->next = NULL;

    // read content from file
    FILE *pf = fopen(FILENAME, "r");
    F_PRINT_ERR(pf);

    //int n;

    StuNode *cur = (StuNode *)malloc(sizeof(StuNode));

    if (NULL == cur)
    {
        exit(-1);
    }

    while ((fread((void *)&cur->data, sizeof(Stu), 1, pf)) > 0)
    {
        cur->next = head->next;
        head->next = cur;

        cur = (StuNode *)malloc(sizeof(StuNode));

        if (NULL == cur)
        {
            exit(-1);
        }
    }

    free(cur);
    cur = NULL;

    fclose(pf);

    return head;
}

void traverseList(StuNode *head)
{
    head = head->next;

    while (head)
    {
        printf("name: %15s, sex: %c, age: %d, score: %.2f\n",
            head->data.name, head->data.sex, head->data.age, head->data.score);
        head = head->next;
    }
}

void addListNode(StuNode *head)
{
    StuNode *node = (StuNode *)malloc(sizeof(StuNode));

    if (NULL == node)
    {
        exit(-1);
    }

    printf("name: ");
    scanf("%s", node->data.name);
    getchar();

    printf("sex: ");
    scanf("%c", &node->data.sex);

    printf("age: ");
    scanf("%d", &node->data.age);

    printf("score: ");
    scanf("%lf", &node->data.score);

    node->next = head->next;
    head->next = node;
}

StuNode * searchListNode(StuNode *head)
{
    printf("please input search name: ");
    char name[30];
    scanf("%s", name);

    head = head->next;

    while (head)
    {
        if (0 == strcmp(name, head->data.name))
        {
            break;
        }
        head = head->next;
    }

    return head;

}

void delListNode(StuNode *head)
{
    StuNode * target = searchListNode(head);

    if (NULL == target)
    {
        printf("not found, do nothing\n");
        getchar();
        getchar();
        return;
    }

    while (head->next != target)
    {
        head = head->next;
    }

    head->next = target->next;
    free(target);
    target = NULL;
}

int getLenOfList(StuNode *head)
{
    int len = 0;
    head = head->next;

    while (head)
    {
        len++;
        head = head->next;
    }

    return len;
}

void sortList(StuNode *head)
{
    int len = getLenOfList(head);

    StuNode *h;
    StuNode *p;
    StuNode *q;

    for (int i = 0; i < len-1; i++)
    {
        h = head;
        p = h->next;
        q = p->next;

        for (int j = 0; j < len-1-i; j++)
        {
            if (strcmp(p->data.name, q->data.name) > 0)
            {
                h->next = q;
                p->next = q->next;
                q->next = p;

                h = q;
                q = p->next;
                continue;
            }

            h = h->next;
            p = p->next;
            q = q->next;
        }
    }
}

void save2File(StuNode *head)
{
    FILE *pf = fopen(FILENAME, "w");
    F_PRINT_ERR(pf);

    head = head->next;

    while (head)
    {
        fwrite((void *)&head->data, sizeof(Stu), 1, pf);
        head = head->next;
    }

    fclose(pf);
}

void destoryList(StuNode *head)
{
    StuNode *t;

    while (head)
    {
        t = head;
        head = head->next;

        free(t);
        t = NULL;
    }
}

int main()
{
    //intitData2File();
    StuNode *head = createList();
    int choice;

    while (1)
    {
        system("clear");
        printf("\t\t\tmanagement\n");
        printf("\t\t\t\tdate: \n");
        printf("\n");
        printf("\n");

        traverseList(head);
        printf("==========\n");

        printf("\t1->add  2->find 3->del 4->sort 5->exit\n");
        printf("please input choice: ");
        scanf("%d", &choice);
        printf("==========\n");

        StuNode * target;

        switch (choice)
        {
            case 1:
                addListNode(head);
                break;
            case 2:
                target = searchListNode(head);

                if (NULL == target)
                {
                    printf("not found\n");
                    getchar();
                    getchar();
                }
                else
                {
                    printf("node founded in list\n");
                    printf("found result.  name: %s, sex: %c, age: %d, score: %.2f",
                        target->data.name, target->data.sex, target->data.age, target->data.score);
                    getchar();
                    getchar();
                }
                break;
            case 3:
                delListNode(head);
                break;
            case 4:
                sortList(head);
                break;
            case 5:
                save2File(head);
                destoryList(head);
                exit(-1);
            default:
                printf("input invalid\n");
                getchar();
                break;
        }
    }

    return 0;
}