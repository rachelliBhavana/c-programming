/*
Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30
*/
/*
Function Name : display
Description :  recursive program which accept no from user and return its product of digits.
Input : 523
Output : 30
Author : Bhavana Rachelli
Date : 06 July 2021
*/
#include<stdio.h>
int display(int ino)
{
	static int i=1,s=1;

	if(ino>0)
	{
      i=ino%10;
      s=i*s;
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