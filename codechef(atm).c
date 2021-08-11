#include<stdio.h>
int main()
{
	int x,y;
	float ret;

	printf("enter pooja's current balance account\n");
	scanf("%d",&x);
	printf("enter amount to withdraw\n");
	scanf("%d",&y);
	if((0<x<=2000)&&(0<y<=2000)&&(y%5==0))
	{
	   
       ret=x-y-0.50;
       printf("current balance is %f: ",ret);
       
	}
	else
	{
		printf("invalid\n");
	}

return 0;
}	