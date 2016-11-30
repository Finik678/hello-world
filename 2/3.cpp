#include "stdio.h"



int main()
{
	int count, num;
	printf("Vvedite chislo strok dlya rozhdestvenskoy yelki: ");
	scanf_s("%i", &count);
	while ( count <= 0 )
	{
		printf("Dannyye byli vvedeny nepravil'no! Vvedite chislo strok dlya rozhdestvenskoy yelki snova: ");
		scanf_s("%i", &count);
	}
	 for (int j = 0; j < count; ++j)
	 {
		
		 for(int z = 0; z <= (count - j) + 40 ; ++z)
		 {
             printf(" ");
		 }
		 for(int z = 0; z <= 2 * j; ++z)
		 {
			 printf("*");
		 }
		 printf("\n");
	 }
	getchar();
	getchar();
	return 0;
}

