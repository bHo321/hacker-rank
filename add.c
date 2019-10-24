#include<stdio.h>
int main()
{
	int num,sum=0,n,i=0;
	printf("How much no you want to add : ");
	scanf("%d",&n);
	while(i<n)
	{
		printf("Enter Number : ");
		scanf("%d",&num);
		sum =sum+ num;
	}
	printf("sum = %d",sum);
}
