#include <stdio.h>

	int w, y, c, d, e, g;
	float h, i, f;
	char a= '@', b='$';
	
int main()
{
	printf("\nDe un numero entero: ");
		scanf("%d", &w);
	printf("\nDe otro numero entero: ");
		scanf("%d", &y);
	printf("\nDe un numero decimal: ");
		scanf("%f", &h);
	printf("\nDe otro numero decimal: ");
		scanf("%f", &i);
	c=w+y;
	d=w-y;
	e=w*y;
	f=h/i;
	g=w%y;
	printf("\n%d + %d = %d\n", w,y,c);
	printf("\n%d - %d = %d\n", w,y,d);
	printf("\n%d * %d = %d\n", w,y,e);
	printf("\n%d mod %d = %d\n", w,y,g);
	printf("\n%.2f / %.2f = %.2f\n", h,i,f);
	printf("\n\n%s << %s", a, a<<b);
	
	return 0;
}
