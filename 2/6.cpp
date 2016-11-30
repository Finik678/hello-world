#include  <stdio.h>
#include <string.h>
int main() 
{
	char str[101];
	int b;
    printf("Enter the string: \n");
    fgets (str, 101, stdin);
	b = strlen(str);
	int j=0;
    for (int i = 0 ; i < b ; i++) 
	{

		if (str[i] == ' ') 
		{
			if ( j == 0 ) 
				continue;
			if (str[i+1] == ' ') 
				continue;
		}
		char l = str[i];
		str[i] = str[j];
		str[j] = l ;
		for (b; b > 0 ; b--)
		{
			if (str[b-1] == ' ')
			{
				str[b-1] = '\0';
			}
			else break;
		}
        j++;

    }
	str[101]='\0';
    printf("\nResult:%s", str);
    getchar();
}