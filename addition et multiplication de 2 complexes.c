#include <stdio.h>

main()
{
//introduction et mise en place de base

	double a1 = 0, a2 = 0, b1 = 0, b2 = 0, x = 0, y = 0, x1 = 0, y1 = 0;
	printf("\nAddition et multiplication de deux nombres complexes\n\n");
	printf("Veuillez rentrer les valeurs des deux nombres complexes en 'a' et en 'b'\n\n");

	printf("**Formule ==> Z=a+jb**\n\n");
	printf("Premier nombre complexe :\n\n");
	printf("a=?\n\n");
	scanf("%lf",&a1);
	printf("\n");
	printf("b=?\n\n");
	scanf("%lf",&b1);
	printf("\n");

	printf("**Formule ==> Z=a+jb**\n\n");
	printf("Deuxieme nombre complexe :\n\n");
	printf("a=?\n\n");
	scanf("%lf",&a2);
	printf("\n");
	printf("b=?\n\n");
	scanf("%lf",&b2);
	printf("\n");

//mise en équations et opérations

	x = a1+a2;
	y = b1+b2;

	if ((b2*b1)>0)
	{
		x1 = (a1*a2) - (b2*b1);
	}
	else
	{
		x1 = (a1*a2) + (b2*b1);
	}

	y1 = (a1*b2) + (b1*a2);


	printf("L'addition vaut %f+j%f\n\n", x, y);

	printf("La multiplication vaut %f+j%f\n\n", x1, y1);

}
