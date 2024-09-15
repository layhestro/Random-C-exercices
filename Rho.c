
#include <stdio.h>
#include <math.h>

main()
{
	float a = 0, b = 0, c = 0, Rho = 0, x1 = 0, x2 = 0;

	printf("\nProgramme de rho\n\n");
	printf("Equation du type ax^2 + bx + c\n");
	printf("Entrez a  ");
	scanf("%f",&a);
	printf("\nEntrez b  ");
	scanf("%f",&b);
	printf("\nEntrez c  ");
	scanf("%f",&c);

	Rho = b*b-4*a*c;

	if (Rho >= 0)
	{
		x1 = (-b + sqrt(Rho))/(2*a);
		x2 = (-b - sqrt(Rho))/(2*a);
	}
	
	else 
	{
		printf("2 racines complexes conjuguées\n\n");
		printf("x1= %f + i %f\n", -b/(2*a), sqrt(-Rho)/(2*a));
		printf("x2= %f - i %f\n", -b/(2*a), sqrt(-Rho)/(2*a));
	}

}