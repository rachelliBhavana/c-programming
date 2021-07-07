/*
Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3
*/
/*
Function Name : display
Description :  recursive program which accept number from user and return smallest digit
Input : 87983
Output : 3
Author : Bhavana Rachelli
Date : 08 July 2021
*/
#include<stdio.h>
int display(int ino)
{
    static int imin=9,i=0;
    if(ino!=0)
    {
    	i=ino%10;
    	if(i<imin)
    	{
    		imin=i;
    	}
    	ino=ino/10;
        display(ino);
    }
    return imin;
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