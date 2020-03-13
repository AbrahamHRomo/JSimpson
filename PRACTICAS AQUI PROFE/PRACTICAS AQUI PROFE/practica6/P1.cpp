//Jaziel Alejandro Carmona Martinez   Mat:1917435

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float p, cf = 0, d1 = 0, d2=0, d3=0,cand1,cand2,cand3;
	int  td,cf1,cf2,cf3;
	
	printf("Pesos con los que cuenta: ");
	scanf("%f",&p);
	
    if(p>=0)
	{
	    while(p>=0)
	    {
		  printf("\n\nque tipo de dulce quieres: \n\ndulce 1: $0.75 \ndulce 2: $1.15 \ndulce 3: $0.65\n");
		  scanf("%d",&td);
			
	      switch(td)
	      {
	       case 1: 
	            printf("\n¿Cuantos dulces quieres?");
	            scanf("%d",&cand1);
		        p -= cand1*0.75;
		        d1 += cand1*0.75;
		        cf1 += cand1;
		        
	            break;
	      
	       case 2: 
	            printf("\n¿Cuantos dulces quieres?");
	            scanf("%d",&cand2);
		        p -= cand2*1.15;
		        d2 += cand2*1.15;
		        cf2 += cand2;
	            break;
	            
		  case 3: 
		        printf("\n¿Cuantos dulces quieres?");
	            scanf("%d",&cand3);
		        p -= cand3*0.65;
		        d3 += cand3*0.65;
		        cf3 += cand3;
		        break;
		    }
	    }
    }
	
	printf("ya no te alcanza");
	printf("\ncantidad de dulce tipo 1: %d \n costo: %f",cf1,d1);
	printf("\ncantidad de dulce tipo 2: %d \n costo: %f",cf2,d2);
	printf("\ncantidad de dulce tipo 3: %d \n costo: %f",cf3,d3);
	   
	cf = d1 + d2 + d3;
	printf("\ncosto final: %.2f\n",cf);
	system("pause");
	return 0;
}
