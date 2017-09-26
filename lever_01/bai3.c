#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{
	int d,m,y;
	printf ("nhap ngay :");
	scanf("%d",&d);
	printf (" nhap  thang :");
	scanf ("%d",&m);
	printf ("nhap nam : ");
	scanf ("%d",&y);
	if (d<10)
		printf ("0%d",d);
	else 
		printf ("%d",d);
	printf ("/");
	if (m<10)
		printf ("0%d",m);
	else 
		printf ("%d",m);
	printf ("/");
	printf ("%d",(y%100));
	return 0;
}
