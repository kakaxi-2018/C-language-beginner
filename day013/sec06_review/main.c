#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contactData
{
    char name[30];
    char mobile[15];
    char fixedPhone[15];
    char company[50];
} ContactData;

typedef struct contactNode
{
    ContactData contactData;
    struct contactNode *next;
} ContactNode;

ContactNode *createList()
{
    ContactNode *head = (ContactNode *)malloc(sizeof(ContactNode));

    if (NULL == head)
    {
        exit(-1);
    }

    head->next = NULL;
    return head;
}

void traverseList(ContactNode *head)
{
    head = head->next;

    while (head)
    {
        printf("name: %15s, mobile: %s, fixedPhone: %s, company: %s\n", 
                head->contactData.name, head->contactData.mobile, 
                head->contactData.fixedPhone, head->contactData.company);
        head = head->next;
    }
}

ContactNode * searchNode(ContactNode *head, char *name)
{
    head = head->next;

    while (head)
    {
        if (0 == strcmp(head->contactData.name, name))
        {
            break;
        }
        head = head->next;
    }

    return head;
}

void deleteNode(ContactNode *head, ContactNode *pFind)
{
    if (NULL == pFind->next)
    {
        while (head->next != pFind)
        {
            head = head->next;
        }

        head->next = pFind->next;
        //free(pFind);  // Node in stack, not heap, need't call free()
        pFind = NULL;
    }
    else
    {
        // assign the value of next node to pFind, and delete the next node
        ContactNode *t = pFind->next;
        pFind->contactData = t->contactData;
        pFind->next = t->next;
        //free(t);  // Node in stack, not head, need't call free()
        t = NULL;
    }
}

void modifyNode(ContactNode *pFind, char *mobile)
{
    strcpy(pFind->contactData.mobile, mobile);
}

// list, implement add, search, modify, and delete
int main()
{
    ContactNode *head = createList();

    ContactNode c1 = {"ZhangSan", "+8617011111112", "0755112233", "TenCent"};
    ContactNode c2 = {"LiSi", "+8615022222222", "0755222222", "HuaWei"};
    ContactNode c3 = {"WangWu", "+8618133333335", "075566666", "DaJiang"};

    head->next = &c1;
    c1.next = &c2;
    c2.next = &c3;
    c3.next = NULL;

    traverseList(head);

    ContactNode *pFind = searchNode(head, "WangWu");

    if (NULL == pFind)
    {
        printf("found none\n");
    }
    else
    {
        printf("founded the target\n");
        //deleteNode(head, pFind);
        modifyNode(pFind, "+8618888888888");
    }

    //printf("after delete\n");
    printf("after modify\n");
    traverseList(head);

    return 0;
}
