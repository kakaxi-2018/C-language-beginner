#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _stu
{
    char *name;
    double score;
} Stu;

void func()
{
    Stu s;
    //strcpy(s.name, "Bob");  // error, s.name pointer is undefined, copy directly is not correct
    //s.name = "JimGreen";  // s.name is readonly, can't modifyed
    s.name = (char *)malloc(100 * sizeof(char));

    if(NULL == s.name)
    {
        printf("malloc() error\n");
        exit(1);
    }

    strcpy(s.name, "JimGreen");
    s.score = 95.0;


    free(s.name);  // note: release
    s.name = NULL;
}

int main()
{
    func();

    return 0;
}