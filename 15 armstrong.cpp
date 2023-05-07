#include<stdio.h>
#include<math.h>
int main()
{
	int num,ornum,rem,result=0,n=0;
	printf("enter the value num:");
	scanf("%d",&num);
	ornum=num;
	while(ornum!=0){
		ornum/=10;
		n++;
	}
	ornum=num;
	while(ornum!=0){
		rem=ornum%10;
		result+=pow(rem,n);
		ornum/=10;
	}
	if(result==num)
	printf("%d is armstrong",num);
	else
	printf("%d is not armstrong",num); 
	return 0;
}

