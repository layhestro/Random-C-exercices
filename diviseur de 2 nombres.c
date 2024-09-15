
#include <stdio.h>

main()
{
	int Nombre1 = 0, Nombre2 = 0, Permuteur = 0;
	printf("\nEntrez un nombre entier\n\n");
	scanf("%d", &Nombre1);
	printf("Entrez un autre nombre entier\n\n");
	scanf("%d",&Nombre2);

	if (Nombre2 > Nombre1)
	{
		Permuteur = Nombre1;
		Nombre1 = Nombre2;
		Nombre2 = Permuteur;
	}
	if (Nombre1%Nombre2 == 0)
	{
		printf("Les nombres sont divisibles l'un par l'autre\n\n");
	}
	else
	{
		printf("Les nombres ne sont pas divisibles\n\n");
	}
return 0;
}
	
	



		