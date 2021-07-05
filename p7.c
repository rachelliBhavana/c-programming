/*
Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24
*/
/*
Function Name : display
Description :  recursive program which accept number from user and return summation of digits.
Input : 879
Output : 24
Author : Bhavana Rachelli
Date : 05 July 2021
*/
#include<stdio.h>
int display(int ino)
{
	static int i=0,s=0;

	if(ino>0)
	{
      i=ino%10;
      s=i+s;
      ino=ino/10;
      display(ino);
      return s;

	}
}
int main()
{
	int ivalue=0,iret=0;
	printf("enter the number: ");
	scanf("%d",&ivalue);
	iret=display(ivalue);
	printf("%d",iret );
	return 0;
}