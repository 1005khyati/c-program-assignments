/*Find area of cube , triangle , circle*/
/*a^6 1.5*b*h pi*r^2 */
#include<stdio.h>
main()
{
	int a,b,h,pi=3.14,r,areacube,areatri,areacircle;
	printf("Enter a side of cube :");
	scanf("%d",&a);
	areacube=a*a*a*a*a*a;
	printf("\n Area of cube : %d",areacube);
	
	printf("\nEnter the base of triangle :");
	scanf("%d",&b);
	printf("\nEnter height of triangle :");
	scanf("%d",&h);
	areatri=1.5*b*h;
	printf("\nArea of triangle : %d",areatri);
	
	printf("\nEnter radius of circle :");
	scanf("%d",&r);
	areacircle=pi*r*r;
	printf("\nArea of circle : %d",areacircle);
	return 0;
	
}
