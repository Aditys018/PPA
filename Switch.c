#include<stdio.h>

int main()
{

    int Standard = 0;

    printf("Enter your standard : \n");
    scanf("%d",&Standard);

    switch(Standard)
    {
        case 1:
            printf("Your exam is at 8 AM\n");
            break;

        case2:
            printf("Your exam is at 9 AM\n");
            break;

        case3:
            printf("Your exam is at 10 AM\n");
            break;

        case 4:
            printf("Your exam is at 11 AM\n");
            break;

        default:
            printf("Wrong choice\n");

    }



    return 0;
}