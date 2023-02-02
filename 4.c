/*WAP in which we input rate and quantity of a product and print the bill amount to be paid.*/
#include<stdio.h>
float main()
{
	float rate,quantity,total;
	printf("Enter the rate of purchase : ");
	scanf("\n%f",&rate);
	printf("\nEnter the quantity of purchase : ");
	scanf("\n%f",&quantity);
	total=rate*quantity;
	printf("\nTotal bill to paid  : total=%f",total);
	return 0;
}

