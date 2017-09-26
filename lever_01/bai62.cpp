#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{	int a,b,c,d,e;
	printf ( " Nhap vao so co 3 chu so : ");
	scanf ("%d",&a);
	b=a%10;
	c=((a-b)/10);
	d=c%10;
	e=(c-d)/10;
	printf ("ket qua : %d",(b*100+d*10+e));
	return 0;
}
