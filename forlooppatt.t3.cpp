#include<stdio.h>
main(){
	int a,b,c;
	for(b=5; b>=1; b--){
		for(a=1; a<=b; a++){
		printf("%i ",a);
	}	
			for(c=b; c<5; c++){
			printf("    ");
}
           for(a=b; a>=1; a--){
			printf("%i ",a);
		}	
			printf("\n");			
	}
}
