#include<stdio.h>
int main()
{
	int num,digit;
	printf("enter the number:");
	scanf("%d",&num);
	printf("digits in %d are :",num);
	while(num>0)
{
	digit=num%10;
	printf("%d",digit);
	num/=10;
}
return 0;
	
}
