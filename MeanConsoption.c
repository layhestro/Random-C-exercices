#include <stdio.h>

main()
{
//declarations
	int h,m;
	float dist,vit_moy,cons_tot,cons_moy;

//entrees
	printf("\nCalcul de la vitesse et de a consommation moyenne\n");
	printf("---------------------------------\n\n");

	printf("Distance parcoure (en km) = ?");
	scanf("%f",&dist);

	printf("Temps de parcours :\n");
	printf("Heures = ?");
	scanf("%d",&h);
	printf("Minutes = ?");
	scanf("%f",&cons_tot);

	printf("Consommation totale (en l) = ?");
	scanf("%f",&cons_tot);

//traitement

	vit_moy = dist/(h+m/60.); //Attention 60.
	cons_moy = cons_tot / dist*100;

//sorties

	printf("\n\n*****************************************\n");
	printf("*Vitesse moyenne = %f km/h *\n",vit_moy);
	printf("*Consommation moyenne = %f l/100km *\n",cons_moy);
	printf("*********************************************\n");

}