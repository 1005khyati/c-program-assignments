/*ASCII Code swapping A=65 a=97*/
#include<stdio.h>
main()
{
	char sml,cap;
	printf("\nEnter any alphabet :");
	scanf("%c",&sml);
	cap=sml-32;
	printf("Capitalise %c",cap);
	return 0;
}
