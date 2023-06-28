#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node * createList()
{
    Node *head = (Node *)malloc(sizeof(Node));

    if (NULL == head)
    {
        exit(-1);
    }

    head->next = NULL;
    return head;
}

void insertElement(Node *head, int item)
{
    Node *cur = (Node *)malloc(sizeof(Node));

    if (NULL == cur)
    {
        exit(-1);
    }

    cur->data = item;
    cur->next = head->next;
    head->next = cur;
}

void traverseList(Node *head)
{
    head = head->next;

    while (head)
    {
        printf("%d\t", head->data);
        head = head->next;
    }

    puts("");
}

Node *searchNode(Node *head, int item)
{
    head = head->next;

    while (head)
    {
        if (item == head->data)
        {
            break;
        }
        head = head->next;
    }

    return head;
}

void deleteNode(Node *head, Node *pFind)
{
    if (NULL == pFind->next)
    {
        while (head->next != pFind)
        {
            head = head->next;
        }

        head->next = pFind->next;
        free(pFind);
        pFind = NULL;
    }
    else
    {
        // assign the value of next node to pFind, delete the next node
        Node *t = pFind->next;
        pFind->data = t->data;
        pFind->next = t->next;
        free(t);
        t = NULL;
    }
}

int getLen(Node *head)
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

void sortList(Node *head)
{
    int len = getLen(head);
    Node *t;
    Node *p;
    Node *q;

    for (int i = 0; i < len-1; i++)
    {
        // bubble sort start comparing from the first element
        t = head;
        p = t->next;
        q = p->next;

        for (int j = 0; j < len-1-i; j++)
        {
            if (p->data > q->data)
            {
                t->next = q;
                p->next = q->next;
                q->next = p;

                t = q;
                q = p->next;
            }
            else
            {
                t = t->next;
                p = p->next;
                q = q->next;
            }
        }
    }
}

void reverseList(Node *head)
{
    // split the list to two lists
    Node *cur = head->next;
    head->next = NULL;
    Node *t;

    // traverse the list which contains node and insert to the head node
    while (cur)
    {
        t = cur;
        cur = cur->next;

        t->next = head->next;
        head->next = t;
    }
}

void destroyList(Node *head)
{
    Node *t;

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
    Node *head = createList();
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        insertElement(head, rand() % 100);
    }

    traverseList(head);

    Node *pFind = searchNode(head, 10);

    if (NULL == pFind)
    {
        printf("found none\n");
    }
    else
    {
        printf("the element you find is is the list\n");
        deleteNode(head, pFind);
    }

    printf("after delete node\n");
    traverseList(head);

    int len = getLen(head);
    printf("len: %d\n", len);

    sortList(head);
    printf("after sort\n");
    traverseList(head);

    reverseList(head);
    printf("after reverse\n");
    traverseList(head);

    destroyList(head);

    return 0;
}