#include<stdio.h>

int main() {
	int i=0;
	float prom, num=0, suma;
	while(num>=0) {
		printf("\nIngrese un numero: "); scanf("%f",&num);
		if(num>=0){
		suma=suma+num; i++; }
		}
    prom=suma/i;
    printf("El promedio es: %.2f\n",prom);
    printf("\n%d\n",i);
}
