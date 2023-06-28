#include <stdio.h>

struct _staff
{
    char name[30];
    char job;
    union 
    {
        int grade;
        char position[30];
    } gOrp;
};

int main()
{
    struct _staff s[2];

    for (int i = 0; i < 2; i++)
    {
        char name[30];
        printf("please input name: ");
        scanf("%s", s[i].name);
        getchar();  // absort a character
        printf("please input job: ");
        scanf("%c", &s[i].job);
        
        if ('s' == s[i].job)
        {
            printf("please input grade: ");
            scanf("%d", &s[i].gOrp.grade);
        }
        else
        {
            printf("please input position: ");
            scanf("%s", s[i].gOrp.position);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        printf("name: %s\n", s[i].name);
        printf("job: %c\n", s[i].job);
        
        if ('s' == s[i].job)
        {
            printf("grade: %d\n", s[i].gOrp.grade);
        }
        else
        {
            printf("position: %s\n", s[i].gOrp.position);
        }
    }

    return 0;
}