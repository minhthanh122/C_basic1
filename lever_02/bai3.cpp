#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{ int a,b,c,d;
	printf ( " nhap a :");
	scanf ( "%d",&a);
	printf (" nhap b : ");
	scanf ("%d",&b);
	printf (" nhap c :");
	scanf ("%d",&c);
 float x,x1,x2 ;
 	("%f",&x1);
 	("%f",&x2);
 	("%f",&x);
 	d=b*b-4*a*c;
 	("%d",&d);
 	if (d == 0)
 		{
		x = (-b)/(a*2);
 		printf (" phuong trinh co nghiem kep : %f",x);
 		}
 	if (d > 0)
 		 {
			x1=(-b+sqrt(d))/(2*a);
 		 	x2=(-b-sqrt(d))/(2*a);
 		 	printf ("x1 = %f", x1);
		 	printf ( "\nx2 = %f", x2);
		 }
	if (d < 0)
	printf (" phuong trinh vo nghiem  ");	
	return 0;
}
