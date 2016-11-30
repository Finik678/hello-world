#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include < string.h >
#define n 9 //symbols
#define m 11 // passwords
int main()
{
	char  s[n];
	int a = 10, q;
	srand(time(NULL));
	for (int j = 1; j < m; j++) 
	{
		for (int i = 0; i < n; i++)
		{
		q = rand() % 3;
			switch (q)
			{
			case 0:

				s[i] = rand() % 26 + 'A';
				break;

			case 1:

				s[i] = rand() % 26 + 'a';
				break;

			case 2:

				s[i] = rand() % 10 + '0';
				break;
			}
		
		s[n-1]='\0';
		}
		printf("%s\n", s);
	}

getchar();
return 0;
}

