/*
Write a recursive program which display below pattern.  Output : a b c d e f  
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
	static int i=1;
	static char ch='a';
	if(i<=ino)
	{
		printf("%c\t",ch);
		i++;
		ch++;
		display(ino);
	}
}

int main()
{
	int ivalue=0;
	printf("enter no\n");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
}