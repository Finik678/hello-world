#include <stdio.h>
#include <conio.h>

int len(const char * s) 
{
	int i = 0;
	while (*s++)
		++i;
	return i;
}

int main()
{
	const int size = 80;
	char str[size];
	printf("Please enter a string:\n");
	scanf("%s", &str);
	int length = len(str);
	int spase = (size - length) / 2;
	for (int i = 0; i < spase; i++)
	{
		printf(" ");
	}
	printf("%s", str);
	getch();
	return 0;
}