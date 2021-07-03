/*
3.Write a recursive program which display below pattern.
Output : 5 4 3 2 1
*/

/*
Function Name : display
Description :  recursive program which display below pattern.
Input : 5
Output : 5 4 3 2 1
Author : Bhavana Rachelli
Date : 03 July 2021
*/

#include<stdio.h>
void display()
{
	static int i=5;
	if(i>=1)
	{
		printf("%d\t",i);
		i--;
        display();
	}
}
int main()
{
	display();
	return 0;

}