#include <stdio.h>

#define MAX_ETUDIANTS	100
#define MAX_COURS		10

#ifdef PROGRAM_TAB_1_DIM
main()
{
// déclarations
	float cotes_info[MAX_ETUDIANTS] ;
	int nb_etud, nb_sup,i ;
	float som,moy ;
	int et_sup[MAX_ETUDIANTS] ;

// initialisations
	// détermination du nb étudiants
	do
	{
		printf("Nombre d'etudiants = ? ") ;
		scanf("%d",&nb_etud) ;
	} while (nb_etud < 1 || nb_etud > MAX_ETUDIANTS) ;

	// initialisation de som et nb_sup
	som = 0. ;
	nb_sup = 0 ;

	// initialisation du tableau
	for (i = 0 ; i < nb_etud ; i++)
	{
		printf("Cote d'informatique de l'etudiant %d = ? ",i+1) ;
		scanf("%f",&cotes_info[i]) ;
		som += cotes_info[i] ;
	}

	printf("-------------------------------------------------\n") ;

// calcul et affichage de la moyenne

	moy = som/nb_etud ;
	printf("Moyenne en informatique = %f\n",moy) ;

	printf("-------------------------------------------------\n") ;

// calcul du nb etud dont cote > moy et mémorisation du numero de l'etudiant

	for (i = 0 ; i < nb_etud ; i++)
	{
		if (cotes_info[i] > moy)
		{
			et_sup[nb_sup] = i ;
			nb_sup++ ;
		}
	}

// affichage des résultats

	for (i = 0 ; i < nb_etud ; i++)
	{
		printf("Cote d'informatique de l'etudiant %d = %.2f\n",i+1,cotes_info[i]) ;
    }

	printf("-------------------------------------------------\n") ;

	printf("Nombre d'etudiants ayant une cote superieure a la moyenne = %d\n",nb_sup) ;

	printf("-------------------------------------------------\n") ;

	printf("Numero des etudiants ayant une cote superieure a la moyenne : \n") ;

	for (i = 0 ; i < nb_sup ; i++)
	{
		printf("Etudiant %2d : %.2f \n",et_sup[i]+1,cotes_info[et_sup[i]]) ;
	}

	printf("-------------------------------------------------\n") ;


}
#endif

//#ifdef PROGRAM_TAB_2_DIM
main()
{
// déclarations
	float cotes[MAX_COURS][MAX_ETUDIANTS] ;
	int nb_cours, nb_etud, i ,j;
	float moy_cours[MAX_COURS] ;

// initialisations
	// détermination du nb étudiants
	do
	{
		printf("Nombre d'etudiants = ? ") ;
		scanf("%d",&nb_etud) ;
	} while (nb_etud < 1 || nb_etud > MAX_ETUDIANTS) ;

	// détermination du nb cours
	do
	{
		printf("Nombre de cours = ? ") ;
		scanf("%d",&nb_cours) ;
	} while (nb_cours < 1 || nb_cours > MAX_COURS) ;

	// initialisation du tableau de cotes
	for ( i = 0 ; i < nb_cours ; i++)
	{
		for (j = 0 ; j < nb_etud ; j++)
		{
			printf("Cote du cours %d de l'etudiant %d = ? ",i+1,j+1) ;
	   		scanf("%f",&cotes[i][j]) ;
		}
	}

// calcul de la moyenne de chaque cours

	for ( i = 0 ; i < nb_cours ; i++)
	{
		moy_cours[i] = 0 ;
		for (j = 0 ; j < nb_etud ; j++)
			moy_cours[i] += cotes[i][j];
		moy_cours[i] /= nb_etud ;
	}

// affichage de la moyenne de chaque cours
	for ( i = 0 ; i < nb_cours ; i++)
	{
		printf("Moyenne du cours %d = %f\n",i+1,moy_cours[i]) ;
	}

}

//#endif
#ifdef AFFECTATION_ET_COMPARAISON
main()
{
// déclarations
	float cotes_info1[MAX_ETUDIANTS] ;
	float cotes_info2[MAX_ETUDIANTS] ;
	int nb_etud, i , idem;
	
// initialisations
	// détermination du nb étudiants
	do
	{
		printf("Nombre d'etudiants = ? ") ;
		scanf("%d",&nb_etud) ;
	} while (nb_etud < 1 || nb_etud > MAX_ETUDIANTS) ;

	// initialisation du tableau
	for (i = 0 ; i < nb_etud ; i++)
	{
		printf("Cote d'informatique de l'etudiant %d = ? ",i+1) ;
		scanf("%f",&cotes_info1[i]) ;
	}

	// copie de cotes_info1 dans cotes_info2
	for (i = 0 ; i < nb_etud ; i++)
		cotes_info2[i] = cotes_info1[i] ;

	cotes_info2[nb_etud-1] = 3 ;

	// affichage des résultats

	for (i = 0 ; i < nb_etud ; i++)
	{
		printf("Cote 1 d'informatique de l'etudiant %d = %.2f\n",i+1,cotes_info1[i]) ;
    }

	for (i = 0 ; i < nb_etud ; i++)
	{
		printf("Cote 2 d'informatique de l'etudiant %d = %.2f\n",i+1,cotes_info2[i]) ;
    }


	// comparaison des tableaux
	idem = 1 ;
	for (i = 0 ; i < nb_etud ; i++)
		if (cotes_info1[i] != cotes_info2[i])
		{
			idem = 0 ;
			break ;
		}

		if (idem == 1)
			printf("\nLes 2 tableaux de cotes sont identiques\n");
		else
			printf("\nLes 2 tableaux de cotes sont differents\n");
}



#endif