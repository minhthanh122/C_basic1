#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{ 
	float a,b,c;
	printf (" nhap so a : ");
	scanf ( " %f",&a);
	printf (" nhap so b : ");
	scanf ( " %f",&b);
	c=(log10(b))/(log10(a));
	printf ("ket qua : %f",c );
	return 0;
}
