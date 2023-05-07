#include<stdio.h>
int main()
{
	int i,n;
	float sum=0.0,avg;
	printf("enter the value n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{

printf("enter the number  %d :",i);
float n;
scanf("%f",&n);
sum+=n;
}
avg=sum/n;
printf("sum=%.2f\n",sum);
printf("avg=%.2f\n",avg);
return 0;
}
