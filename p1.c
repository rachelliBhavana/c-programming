/*
Write a recursive program which display below pattern.
Output : * * * * *
*/

/*
Function Name : display
Description :  recursive program which display below pattern.
Input : 5
Output : * * * * *
Author : Bhavana Rachelli
Date : 03 July 2021
*/
#include<stdio.h>
void display()
{
	static int i=1;
	if(i<=5)
	{
		printf("*\t");
		i++;
		display();
	}
}
int main()
{
	display();
	return 0;
}