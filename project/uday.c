#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
	int num;
	// Take the no. from the user
	printf("Enter the value : ");
	scanf("%d", &num);

for (int i = 1; i <= 10; i++)
{
	printf("%d X %d = %d \n",num, i, i*num);
}

	return 0;
}
