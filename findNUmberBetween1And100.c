#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()

{
 int nb,nbut,nbut2,nbut3,i;
 srand(time(NULL));
 nb=rand();nb=nb%100+1;
 i=0;

 printf("entrez un nombre compris entre 1 et 100\n");
 scanf("%d",&nbut);

 while(nbut!=nb && i<10)
	{
		i=i+1;

		if(nbut<nb)
		{
		printf("ce nombre est trop petit. Entrez un nouveau nombre:\n");
		scanf("%d", &nbut2);
		nbut=nbut2;
		}

		else if(nbut>nb)
		{
		printf("ce nombre est trop grand. Entrez un nouveau nombre:\n");
		scanf("%d",&nbut3);
		nbut=nbut3;
		}
	}

  if(i>=10)
	 printf("vous avez perdu");
  else
	printf("vous avez trouve le nb en %d coups\n",i);
 

 return 0;
}
