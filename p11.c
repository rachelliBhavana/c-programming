/*
Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3
*/
/*
Function Name : display
Description :  recursive program which accept string from user and count the white spaces.
Input : HE llo WOr lD
Output : 3
Author : Bhavana Rachelli
Date : 06 July 2021
*/
#include<stdio.h>
int display(char *str)
{
	static int icnt=0;
	if(*str!='\0')
	{
		if(*str==' ')
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