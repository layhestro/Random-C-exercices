#include <stdio.h>
#include <math.h>

main()
{
	int Nombre = 0; 
	float Compteur = 0, Moyenne = 0, Somme = 0;
	printf("\nMoyenne de plusieurs nombres entiers\n\n");
	printf("entrez un nombre entier positif (-1 pour terminer le programme) :");
	scanf("%d",&Nombre);

	while( Nombre != -1)
	{
		Compteur = Compteur +1;
		Somme = Somme + Nombre;
		printf("\nEntrez un nouveau nombre : ");
		scanf("%d",&Nombre);
	}

	Moyenne = Somme/(Compteur);

	printf("La moyenne vaut %.1f ", Moyenne);

	return 0;
}
