#include <stdio.h>
#define SIZE 250
int main()
{
	char str[SIZE];
	int specs=32;
	printf("Enter the string:\n");
	fgets(str, SIZE, stdin);
	int ch[256]={0};
	for(int i = 0; str[i] != '\0'; i++)
	{
		ch[str[i]]++;
	}
	for (;specs < 256; specs++)
	{
		char a=specs;
		if (ch[specs] != 0)
		{
			printf("%c | %d\n", a, ch[specs]);
		}
	}      
	getchar();
	getchar();
    return( 0);
}