/*
Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120
*/

/*
Function Name : display
Description :  recursive program which accept number from user and return its factorial.
Input : 5
Output : 120
Author : Bhavana Rachelli
Date : 05 July 2021
*/
#include<stdio.h>
int display(int ino)
{
	static int i=1,imult=1;
	if(i<=ino)
	{
		imult=imult*i;
		i++;
		display(ino);
	}
	return imult;
}
int main()
{
	int ivalue=0,iret=0;
	printf("enter the number\n");
	scanf("%d",&ivalue);

	iret=display(ivalue);
	printf("%d",iret);
	return 0;
}