/*
Write a recursive program which accept string from user and count number
of small characters.
Input : HElloWOrlD
Output : 5
*/
/*
Function Name : display
Description :  recursive program which accept string from user and count number of small characters.
Input : HElloWOrlD
Output : 5
Author : Bhavana Rachelli
Date : 03 July 2021
*/
#include<stdio.h>
int display(char *str)
{
	static int icnt=0;
	if(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			icnt++;
		}
		str++;
        display(str);
	}
	return icnt;
}
int main()
{
	int iret=0;
	char arr[20];
	printf("enter the string\n");
	scanf("%[^'\n']s",arr);

	iret=display(arr);
	printf("%d",iret);

	return 0;
}