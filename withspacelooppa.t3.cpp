#include<stdio.h>
main(){
	int a,b,c;	
	for(b=1; b<=5; b++){
		for(c=5; c>b; c--){
		printf("  ");
}
       for(a=6-b; a<=5; a++){
		printf("%i ",a);
	}	
	  printf("\n");			
	}		
}
