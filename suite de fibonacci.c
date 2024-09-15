#include <stdio.h>
#include <math.h>

main()
{
	int dernfibo = 1, avantderfibo = 2, fibo = 0;
	float dernnom = 2, avantdernom, precis;
	
	printf("entrez la precision souhaitee:\n");
	scanf("%f",&precis);
	do
	{
		avantdernom = dernnom;
		fibo = dernfibo + avantderfibo;
		dernnom = (float)fibo/dernfibo;
		avantderfibo = dernfibo;
		dernfibo = fibo;
	}
	while (fabs(dernnom - avantdernom)>= precis);
	printf("Le nombre d'or vaut %f a moins de %f \n\n",dernnom, precis);
return 0;
}
