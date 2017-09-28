#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{
	int a,b,c,d,t1,t2;
	printf (" nhap so a  :");
	scanf ("%d",&a);
	printf (" nhap so b : ");
	scanf ("%d",&b);
	printf (" nhap so c : ");
	scanf ("%d",&c);
	float x,x1,x2,x3,x4 ;
 	("%f",&x1);
 	("%f",&x2);
 	("%f",&x);
 	d=b*b-4*a*c;
 	("%d",&d);
 	if (d == 0)
 		{
		t1=t2=-b/(2*a);
		x = sqrt (t1);
 		printf (" phuong trinh co 2 nghiem : +%f va -%f ",x);
		 }
 	if (d > 0)
 		 {
			t1=(-b+sqrt(d))/(2*a);
 		 	t2=(-b-sqrt(d))/(2*a);
 		 	x1 =  sqrt (t1);
 		 	x2 = sqrt (t2);
			 	 printf (" x1 = +%f", x1);
		 		printf ( "\n x2 = -%f", x1);
		 		printf ("\n x3 = +%f",x2);
		 		printf ("\n x4 = -%f",x2);
		 }
	if (d < 0)
	printf (" phuong trinh vo nghiem  ");	
	return 0;
	
}
