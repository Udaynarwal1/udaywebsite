#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{

    int index=0, num;
    printf("Please enter the value of i");
    scanf("%d", &num);
    do
    {
        printf("%d", index);
        index +=1;
    } while (index<num);   

    return 0;
}
