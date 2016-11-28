#include <conio.h>
#include <stdio.h>
int main()
{
    const float coefficient = 12, coeff = 2.54;
	int ft, inch;
	float cm;
	printf("\n Vvedite svoy rost, kak fut dyuym''(example: 4'10''): ");
	scanf("%d'%d''", &ft, &inch);
	cm = (ft * coefficient + inch)*coeff;
	printf("\n Vysota v santimetrakh = %.1f cm \n", cm);
	getch();
	return 0;
}