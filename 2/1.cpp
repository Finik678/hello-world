#include "stdio.h"

 
int main()
{
	float height, len, h;
	int time=0;
	constant: float g=9.81, m=11800;
	printf("Vvedite vysotu, pri kotoroy sbrasyvali bomby:\n");
	scanf_s("%f", &height);
	while ( height < 0 || height > m)
	{
		printf("Vvedite vysotu, na kotoroy bomba snova upala:\n");
		scanf_s("%f", &height);
	}
	h = height;
	while (h  > 0 )
	{
		len = ( g * time * time) / 2;
		h = height - len ;
		if (h < 0 )
			h=0;
		
		printf("t=%dc h=%.1fm\n" , time , h);
		time++;
	}

	printf("BUM!!! BUM!!! BUM!!!");
	getchar();
	getchar();

    return 0;
}
