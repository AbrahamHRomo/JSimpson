#include<stdio.h>

int main() {
	int i=0;
	float prom, num=0, suma;
	do {
		printf("\nIngrese un numero: "); scanf("%f",&num);
		suma=suma+num; i++;
		}
		while(num>=0);
	i=i-1; suma=suma-num;	
	prom=suma/i;
    printf("\nEl promedio es: %.2f\n",prom);
    printf("\nTotal de numeros leidos son: %d\n",i); return 0;
}
