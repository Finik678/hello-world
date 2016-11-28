#include <stdio.h>

int main()
{
	char gender;
	float weight, height, coefficient, metr;

	printf("\n\t Select floor(m/f):");
	scanf("%c", &gender);
	if ((gender == 'f') || (gender == 'm'))
	{
		printf("\t Enter your weight: ");
		scanf_s("%f", &weight);
		printf("\t Enter your height (cm): ");
		scanf_s("%f", &height);
		metr = height / 100;
        coefficient = weight / (metr * metr);
		printf("\t IMT=%1.2f", coefficient);
		if (gender == 'f')
		{
			if ((coefficient > 19) && (coefficient < 24))
			{
				printf("\n\t  weight is normal ");
			}
			else if (coefficient < 19)
			{
				printf("\n\t  need to gain weight");
			}
			else if (coefficient > 24)
			{
				printf("\n\t  need to lose weight");
			}
		}
		else if (gender == 'm')
			{
				if ((coefficient > 19) && (coefficient < 25))
				{
					printf("\n\t  weight is normal");
				}
				else if (coefficient < 19)
				{
					printf("\n\t  need to gain weight");
				}
				else if (coefficient > 25)
				{
					printf("\n\t  need to lose weight");
				}
			}
	}
	else
		printf("\n\t Wrong gender");
	getchar();
	getchar();
	return(0);
}