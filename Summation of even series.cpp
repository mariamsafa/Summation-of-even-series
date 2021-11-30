#include<stdio.h>
int main()
{
	int i, sum = 0, n;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	for (i = 2; i <= n; i += 2)
	{
		sum = sum + i;
	}
	printf("\nThe summation of even series is %d\n", sum);


	return 0;
}