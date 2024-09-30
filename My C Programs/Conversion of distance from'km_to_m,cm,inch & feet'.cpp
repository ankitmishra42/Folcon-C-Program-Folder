//Conversion of distance
#include <stdio.h>
int main()
{
	float km, m, cm, feet, inch;
	printf("Enter the distance in km ");
	scanf("%f", &km);
	m = km * 1000;
	cm = m * 100;
	inch = cm / 2.54;
	feet = inch / 12;
	printf("Meters=%f\n", m);
	printf("Centimeters=%f\n", cm);
	printf("Inches=%f\n", inch);
	printf("Feets=%f\n", feet);
	return 0;
}
