#include<stdio.h>

int main() {

float a, b, r, suma, dife, prod, coci;
char operacion;
printf("\nIngrese 2 numeros:\n");
scanf("%f",&a);
scanf("%f",&b);
printf("Ingrese operacion:\n(s para suma, r para resta, m para la multiplicacion, d para la division)");
scanf(" %c",&operacion);
switch(operacion)
{
	   case 's':
	   case 'S': suma = a+b; r=suma;
	             break;
	   case 'r':
	   case 'R': dife=a-b; r=dife;
	             break;
	   case 'm': 
	   case 'M': prod=a*b; r=prod;
	             break;
	   case 'd':
	   case 'D': coci=a/b; r=coci;          
	             break;
	   default: printf("error ");
	            
}
printf("El resultado es: %.2f",r);
return 0;
}
