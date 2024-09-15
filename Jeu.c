#include <stdlib.h>
#include <time.h>
#include <stdio.h>

main()
{
	int nb;
	int nbtest;
	int x;
	int y;
	int nbpart,nbwin;
	nbwin=nbpart=0;
	srand(time(NULL));
	do
	{
		nb=rand()%100+1; 
		printf("\nVous n avez que 5 essais pour trouver le nombre recherche !\n");
		for (x=1;x<=5;x++) 
		{
			printf("\nEssai numero %d : ",x);scanf("%d",&nbtest); 
			if (nbtest>nb) 
			{
				printf("Votre nombre est trop grand !\n");
			}
			else if (nbtest<nb)
			{
				printf("Votre nombre est trop petit !\n");
			}
			else
			{
				printf("Bravo, vous avez trouve que le nombre recherche etait %d en %d essai(s) !\n\n",nb,x);
				x=10;nbwin=nbwin+1;  
			}
		}
		if (nbtest!=nb)  
		{
			printf("\nVous avez echoue, le nombre recherche etait: %d\n",nb);
		}
		printf("Que voulez vous faire ?\n");
		printf("Rejouer: 1\n");
		printf("Quitter la partie: 0\n");
		printf("Votre choix: ");scanf("%d",&y);
		nbpart=nbpart+1;  
	}while (y!=0);
	printf("\nRecapitualif des parties: vous avez joue %d partie(s) et en avez gagne %d\n",nbpart,nbwin);
}