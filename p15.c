/*
Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
*/
/*
Function Name : display
Description :  recursive program which accept number from user and return reverse no.
Input : 523
Output : 325
Author : Bhavana Rachelli
Date : 08 July 2021
*/

#include<stdio.h>
int display(int ino)
{
	static int i=0,id=0;
	if(ino>0)
	{
		id=ino%10;
		i=(i*10)+id;
		ino=ino/10;
		display(ino);
	}
	return i;
}

int main()
{
	int iret=0,ivalue=0;
	printf("enter the no\n");
	scanf("%d",&ivalue);
	iret=display(ivalue);
	printf("%d",iret);
	return 0;
}