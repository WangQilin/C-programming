#include <stdio.h>
#include <string.h>
void reverse(char* s, int left, int right);

int main(int argc, char const *argv[])
{
	char s[20];

	printf("Enter a string that is less than 20 characters: ");
	gets(s);
	
	reverse(s, 0, (int)strlen(s)-1);//strlen() returns long type
	printf("%s\n",s);

	return 0;
}

void reverse(char* s, int left, int right)
{
	if (left >= right)
		return;

	char temp = s[left];
	s[left] = s[right];
	s[right] = temp;

	reverse(s, left+1, right-1);
}