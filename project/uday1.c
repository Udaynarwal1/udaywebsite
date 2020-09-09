#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum =0;
   printf("Enter the last natural no. : \n");
   scanf("%d", &num);
   for (int i = 0; i <= num; i++)
   {
       sum +=i;

   }
   printf("sum is %d", sum);
    return 0;
}
