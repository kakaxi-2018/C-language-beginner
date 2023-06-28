#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

void traverseList(Node *head)
{
    while (head)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main()
{
    Node a, b, c, d, e;
    Node *head = &a;  // 1.header

    // content
    a.data = 1;
    b.data = 2;
    c.data = 3;
    d.data = 4;
    e.data = 5;

    // 2.link
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    // 3.ending
    e.next = NULL;

    traverseList(head);

    return 0;
}