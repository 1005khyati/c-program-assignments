/*Temperature c->f*/
#include<stdio.h>
main()
{
	double c,f;
	printf("\nEnter temperature in celsius :");
	scanf("%lf",&c);
	f=1.8*c+32;
	printf("\nFehernhight : %.2lf",f);
	return 0;
	}
