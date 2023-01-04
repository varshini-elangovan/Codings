#include<stdio.h>
#include<string.h>

void checkPalindrome(char *text)
{
	int i;
	int size = strlen(text);
	int count = 0;

	for(i = 0; i < size; i++)
	{
		if(text[i] != text[size-i-1])
		{
			printf("Not a Palindrome\n");
			break;
		}
		else
		{
			count++;
		}
	}
	if(count == size)
	{
		printf("It is a Palindrome\n");
	}
}

void checkPalindromeUsingRecursion(char *text, int start, int end, int *count)
{

    if(end <= 0 || start >= strlen(text))
		return;
	if(text[start] != text[end-1])
	{
		printf("This is not a palindrome\n");
		return;
	}
	else
	{
		(*count)++;
	}
	checkPalindromeUsingRecursion(text, start+1 , end-1, count);
}

int main()
{
	char text[20];
	int count = 0;

	printf("Enter the string to check if palindrome or not\n");
	scanf("%s",text);

	checkPalindrome(text);
    checkPalindromeUsingRecursion(text, 0 , strlen(text), &count);

	if(count == strlen(text))
	{
		printf("This is a palindrome\n");
	}
	return 0;
}
