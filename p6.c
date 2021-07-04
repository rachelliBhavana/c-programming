/*
Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
*/
/*
Function Name : display
Description :  recursive program which display below pattern.
Input : 5
Output : a b c d e
Author : Bhavana Rachelli
Date : 04 July 2021
*/
#include<stdio.h>
void display(int ino)
{
    //static int i=1;
    if(ino>0)
    {
    	printf("%d\t*\t",ino);
    	ino--;
    	display(ino);
    }
}
int main()
{
	int ivalue=0;
	printf("enter the no");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
}