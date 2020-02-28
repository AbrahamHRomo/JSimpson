#include<stdio.h>

int main(){
	char c;
	
	printf("Enter character ");
	c = getchar();
	
	int a = (int) c;
	
	if(48<= a && a <=57){
	printf("Number entered: ");
		
	}else{
	      if( 65<=a && a<=90){
		  printf("Upper alphabetic entered: ");	
	    }else{
	         if(97 <= a && a <= 122){
			 printf("Lower alphabetic entered: ");
		   }else{
		   	printf("Symbol entered: ");
		   }
	    }
    }
	putchar(c);
	printf("\n");
	return(0);
}
