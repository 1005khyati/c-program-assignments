/*Swapping*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("\nEnter a number :");
	scanf("%i",&a);
	printf("\nEnter second number :");
	scanf("%i",&b);
	c=a;
	a=b;
	b=c;
	printf("\n After swapping \na=%i \nb=%i",a,b,c);
	return 0;
	
	//using arithmetic
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swapping \na=%i \nb=%i",a,b);
	return 0;
}
