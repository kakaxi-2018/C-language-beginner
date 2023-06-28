#include <stdio.h>
#include <stdlib.h>

#define Size 1024

typedef struct _stack
{
    char space[Size];
    int top;
} Stack;

void initStack(Stack *s)
{
    for (int i = 0; i < sizeof(s->space) / sizeof(s->space[0]); i++)
    {
        s->space[0] = 0;
    }

    s->top = 0;
}

int isFull(Stack *s)
{
    return Size == s->top;
}

int isEmpty(Stack *s)
{
    return 0 == s->top;
}

void push(Stack *s, int c)
{
    s->space[s->top++] = c;
}

char top(Stack *s)
{
    return s->space[--s->top];
}

int main()
{
    Stack s;
    initStack(&s);
    
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (!isFull(&s))
        {
            push(&s, i);
        }
    }

    while (!isEmpty(&s))
    {
        printf("%c", top(&s));
    }

    puts("");

    return 0;
}