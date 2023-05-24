#include <stdio.h>

int main()
{
    int choice;
    scanf("%d", &choice);

    switch (choice) 
    {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
            printf("Thank you patronizing\n");
            break;
        case 4:
            printf("notebook\n");
            break;
        case 3:
            printf("Sansumg screen\n");
            break;
        case 2:
            printf("Best chair\n");
            break;
        case 1:
            printf("HHKB professional keyboard\n");
            break;
    }

    return 0;
}