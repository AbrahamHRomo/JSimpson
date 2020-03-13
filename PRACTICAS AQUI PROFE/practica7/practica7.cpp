#include<stdio.h>

int main(){
	
	int b, n, i, multi;
	 printf("Ingrese numero base: \n");
	 scanf("%d",&b);
	 
	 printf("\nIngrese cantidad de multiplos de la base: \n");
	 scanf("%d",&n);
	 
	 for(i = 1; i <= n; i++){
	 	multi = i * b;
	 	printf("\n%d",multi);
	 	
	 } return 0;
	 
}
