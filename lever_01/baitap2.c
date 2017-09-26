#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{
	float a,b,c;
	printf ("nhap diem mon toan : ");
	scanf ("%f",&a),
	printf ("nhap diem mon ly: ");
	scanf ("%f",&b);
	printf (" nhap diem mon hoa: ");
	scanf ("%f",&c);
	printf (" diem trung binh : %0.3f",(a+b+c)/3);
	return 0;
} 

