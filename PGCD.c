
#include <stdio.h>
#include <math.h>

main()
{
	int Numerateur = 0, Denominateur = 0, Reste = 0;

	printf("\nProgramme du PGCD\n\n");
	printf("Entrez un numerateur \n");
	scanf("%d",&Numerateur);
	printf("Entrez un denominateur \n");
	scanf("%d",&Denominateur);

	do
	{
		Reste = Numerateur%Denominateur;
		Numerateur = Denominateur;
		Denominateur = Reste;
	}
	while (Reste != 0);

	printf("le PGCD est %d\n\n",Numerateur);
}
	


	
