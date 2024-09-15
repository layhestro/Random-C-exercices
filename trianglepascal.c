#include <stdio.h>
main()
{
// D�clarations 
 int P[14][14]; // matrice r�sultat  
 int N;         // degr� du triangle 
 int i, j;    
//Entr�e des donn�es
 do {
      printf("Entrez le degre N du triangle (max.13) : ");
     scanf("%d", &N);
 } while (N>13||N<0);
 // Construction des lignes 0 � N du triangle: 
 // Calcul des composantes du triangle jusqu'� la diagonale principale. 
 //NB: on ecrit plus grand ou egal car la premiere ligne du triangle est aussi appelee de degre zero
 for (i=0; i<=N; i++)
     {
      P[i][i]=1;
      P[i][0]=1;
      for (j=1; j<i; j++)
            P[i][j] = P[i-1][j] + P[i-1][j-1];
     }
  // Edition du r�sultat 
 printf("Triangle de Pascal de degre %d :\n", N);
 for (i=0; i<=N; i++)
    {
     for (j=0; j<=i; j++)
          if (P[i][j])
                printf("%d", P[i][j]);
     printf("\n");
    }
 return 0;
}
