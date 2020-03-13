#include<stdio.h>

int main() {
	int i=-1;
	float prom, num=0, suma;
	do {
	    suma=suma+num;
		printf("\nIngrese un numero: "); scanf("%f",&num);
		 i++;
		}
		while(num>=0);
		if(i==0)
		printf("El promedio no se puede hacer.\n");
		else
		prom = suma/i;
	
	prom=suma/i;
    printf("\nEl promedio es: %.2f\n",prom);
    printf("\nTotal de numeros leidos son: %d\n",i); return 0;
}
