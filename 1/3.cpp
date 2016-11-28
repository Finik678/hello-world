#include <stdio.h>
#include <conio.h>
int main()
{
	const float pi = 3.14;
    	const float rou = 180;
	float ang;
	char meas;
	printf("\n Vvedite ugol v radianakh ili gradusakh (example: 85D or 1.45R): ");
	scanf("%f%c", &ang, &meas);
	if (meas == 'D' || meas == 'd')
	{
		printf("R=%1.2f \n", pi / rou * ang);
	}
	else if (meas == 'R' || meas == 'r')
	{
		printf("D=%1.2f \n", rou / pi*ang);
	}
	else
	{
		printf("Ugol izmeryayetsya v R ili D!");
	}
	getch();
	return 0;
}