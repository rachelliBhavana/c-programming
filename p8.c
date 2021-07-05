/*
Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5
*/

/*
Function Name : display
Description :  recursive program which accept number from user and count characters.
Input : Hello
Output : 5
Author : Bhavana Rachelli
Date : 05 July 2021
*/
#include<stdio.h>

int display(char *str)
{
	static int i=0;
	if(*str!='\0')
	{
		i++;
		str++;
		display(str);
	}
	return i;
}
int main()
{
	int iret=0;
	char arr[20];

	printf("enter string\n");
	scanf("%[^'\n']s",arr);

	iret=display(arr);
	printf("%d",iret);

	return 0;
}