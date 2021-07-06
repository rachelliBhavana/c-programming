/*
Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9
*/
/*
Function Name : display
Description :  recursive program which accept no from user and return largest no.
Input : 87983
Output : 9
Author : Bhavana Rachelli
Date : 06 July 2021
*/
#include<stdio.h>
int display(int ino)
{
    static int imax=0,i=0;
    if(ino!=0)
    {
    	i=ino%10;
    	if(i>imax)
    	{
    		imax=i;
    	}
    	ino=ino/10;
        display(ino);
    }
    return imax;
}
int main()
{
	int iret=0,ivalue=0;
	printf("enter the number\n");
	scanf("%d",&ivalue);
	iret=display(ivalue);
	printf("%d",iret);
	return 0;
}