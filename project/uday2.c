#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i1;
    printf("Enter the no. : \n");
    scanf("%d", &i1);
    switch (i1)
    {
    case 2:
        printf("the value is 2");
        break;

    case 3:
        printf("the value is 3");
        break;
    default:
        printf("Enter a valid command");
        break;
    }

    return 0;
}
