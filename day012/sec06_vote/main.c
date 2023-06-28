#include <stdio.h>
#include <string.h>

typedef struct _candidate
{
    char name[30];
    int voteCount;
} Candidate;

void disVote(Candidate can[], int n, int numOfAbstain)
{
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        printf("name: %s, count: %d\n", can[i].name, can[i].voteCount);

        if (can[i].voteCount > can[index].voteCount)
        {
            index = i;
        }
    }

    int numOfEqual = 0;

    for (int i = 0; i < n; i++)
    {
        if (can[i].voteCount == can[index].voteCount && strcmp(can[i].name, can[index].name) != 0)
        {
            numOfEqual++;
        }
    }

    if (numOfEqual > 0)
    {
        printf("candidate has same vote, count: %d, need vote again\n", can[index].voteCount);
    }
    else
    {
        printf("\nthe no 1 is %s, count: %d\n", can[index].name, can[index].voteCount);
    }

    printf("numOfAbstain: %d\n", numOfAbstain);
}

int main()
{
    Candidate can[] = {{"zhangsan", 0}, 
                        {"lisi", 0}, 
                        {"wangwu", 0}};
    
    char name[1024];
    int numOfAbstain = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("pleans input name you supported: ");
        scanf("%s", name);

        int flag = 0;

        for (int i = 0; i < sizeof(can) / sizeof(*can); i++)
        {

            if (0 == strcmp(can[i].name, name))
            {
                can[i].voteCount++;
                flag = 1;
                break;
            }
        }

        if (0 == flag)
        {
            numOfAbstain++;
            printf("invalid vote, name: %s\n", name);
        }
    }

    disVote(can, 3, numOfAbstain);

    return 0;
}