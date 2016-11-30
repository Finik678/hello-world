#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
# define N 10
int main()
{
	int  q;
	const int len = 9; 
	char  s[N], a, newstr[len]="", ex[2]=""; 
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		q = rand() % 2;
		switch (q)
		{
			case 0:
				s[i] = rand() % 10 + '0';
				break;

			case 1:

				s[i] = rand() % 26 + 'a';
				break;
		}
	}
	s[N-1]='\0';
	printf("%s\n", s);
	
	char exchange2;
	for (int i = 0; i < len; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			exchange2 = s[i];
			ex[0]=exchange2;
			strcat(newstr, ex);
		}
	}
	
	for (int j = 0; j <len; j++)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			exchange2 = s[j];
			ex[0]=exchange2;
			strcat(newstr, ex);
			
		}
	}
	printf("%s", newstr);
	getchar();
	return 0;
}
