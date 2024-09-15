#include <stdio.h>

main()

{
	int a,b,c,d;

	printf("Entrer les coefficients du polynome du troisieme degre du type a x3 + b x2 + c x + d = 0\n");
	
	printf("a = ");
	scanf("%d",&a);
	
	printf("b = ");
	scanf("%d",&b);
	
	printf("c = ");
	scanf("%d",&c);
	
	printf("d = ");
	scanf("%d",&d);

	printf("\nLa derivee du polynome est egale a : (%d) x2 + (%d) x + (%d)\n",3*a,2*b,c);
	printf("\nLa primitive du polynome est egale a : (%d/4) x4 + (%d/3) x3 + (%d/2) x2 + (%d) x + cste\n",a,b,c,d);

}




