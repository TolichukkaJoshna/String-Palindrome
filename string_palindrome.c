#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	printf("enter any string..:");
	scanf("%s",s1);
	strcpy(s2,s1);
	strrev(s2);
	printf("\nGIVEN STRING..:%s",s1);
	printf("\nREVERSE STRING..:%s",s2);
	if(strcmp(s1,s2)==0)
	{
		printf("\ngiven string is palindrome");
	}
	else
	{
		printf("\nnot a palindrome");
	}
}
