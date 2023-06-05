#include <stdio.h>

int main1()
{
    int *p = (int *)0x0001;
    char *q = (char *)0x0001;

    if (p == q)  // note: not do this, different type
    {
        printf("p == q\n");
    }
    else
    {
        printf("p != q\n");
    }

    return 0;
}

// determine whether it is a palindrome
int main2()
{
    char name[] = {'M', 'N', 'D', 'N', 'N'};
    int i = 0;
    int j = sizeof(name) / sizeof(name[0]) - 1;
    int flag = 0;

    while (i < j)
    {
        if (name[i] == name[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if (0 == flag)
    {
        printf("is palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }

    return 0;
}

int main()
{
    char name[] = {'M', 'N', 'D', 'D', 'N', 'M'};

    char *pHead = &name[0];
    char *pTail = &name[sizeof(name)/sizeof(name[0]) - 1];
    int flag = 0;

    while (pHead < pTail)
    {
        if (*pHead == *pTail)
        {
            pHead++;
            pTail--;
        }
        else
        {
            flag = 1;
            break; 
        }
    }

    if (0 == flag)
    {
        printf("is palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }

    return 0;
}