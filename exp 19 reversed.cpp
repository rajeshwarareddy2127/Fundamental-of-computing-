#include<stdio.h>
int main()
{
	int num,reversed=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		reversed=reversed*10+num%10;
		num/=10;
	}
	printf("reversed number:%d\n",reversed);
	return 0;
}
