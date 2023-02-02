/*WAP in which you input the base and height of triange and 
   print the area of the triangle*/
   
#include<stdio.h>
void main()
{
	float a=1.5,base,height,area;
	printf("Enter the base of triangle :");
	scanf("\n%f",&base);
	printf("\nEnter the height of triangle :");
	scanf("\n%f",&height);
	area=a*base*height;
	printf("\nArea of triangle : %f",area);
	
}
