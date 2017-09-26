#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{
	float a,b,c,S,p;
	printf ( "Chieu dai canh a : ");
	scanf ("%f",&a);
	printf ( " Chieu dai canh b : ");
	scanf ("%f",&b);
	printf ( " Chieu dai canh c : ");
	scanf ("%f",&c);
	printf (" Chu vi tam giac : %f ", ( a+b+c));
	p=(a+b+c)/2;
	S=(sqrt)((p-a)*(p-b)*(p-c));
	printf (" \n Dien tich tam giac : %f",S);
	getch();
	
}	

