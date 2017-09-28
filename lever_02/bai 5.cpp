#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{ int a;
printf (" chon 1 de tinh C va S cua tam giac");  
printf ("\n chon 2 de tinh C va S cua hinh vuong ");
printf ("\n chon 3 de tinh c va S cua hinh chu nhat ");
printf ("\n chon 4 de tinh c va s cua hinh tron ");
printf ("\n nhap su lua chon : ");
scanf ("%d",&a);
if (a == 1)
		{	float q,w,e,r,p;
	printf ( "Chieu dai canh a : ");
	scanf ("%f",&q);
	printf ( " Chieu dai canh b : ");
	scanf ("%f",&w);
	printf ( " Chieu dai canh c : ");
	scanf ("%f",&e);
	printf (" Chu vi tam giac : %f ", ( q+w+e));
	r=(q+w+e)/2;
	p=(sqrt)(r*(r-q)*(r-w)*(r-e));
	printf (" \n Dien tich tam giac : %f",p);
		}
if (a == 2)
		{ float q,w,e;
	printf ( " nhap do dai canh a : ");
	scanf ("%f",&q);
	w=q*4;
	e=q*q ;
	printf (" chu vi hinh vuong :%f ",w);
	printf ( " dien tich hinh vuong : %f",e);
		}
if (a == 3)
		{ float q,w,e,r ;
	printf ( " nhap canh a : ");
	scanf ("%f",&q);
	printf ("nhap canh b :");
	scanf (" %f",&w);
	e=2*(q+w);
	r=q*w;
	printf (" chu vi hinh chu nhat : %f",e);
	printf (" dien tich hinh chu nhat :%f ",r);
		}
if ( a==4)
		{ float q,w,e;
	printf ( " ban kinh r : ");
	scanf ( "%f",&q);
	w = 2*q*3.14;
	e=q*q*3.14;
	printf ("chu vi hinh tron : %f",w);
	printf (" dien tich hinh tron : %f",e);
		}	
		return 0;
}
