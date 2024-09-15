#include <stdio.h>

main()
{
	int n = 1,somme = 1;
	do
	{
		n = n + 1;
		somme = somme + n;
	}
	while (somme<=1000);
	printf("\nLa somme des %d premiers entiers est %d\n",n,somme);
}