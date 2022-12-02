#include<stdio.h>
main(){
	int a,b,c;
	for(b=1; b<=5; b++){
	    for(c=1; c<b; c++){
			printf("  ");
}
        for(a=5; a>=b; a--){
			printf("%i ",a);
	}	
			
    	printf("\n");
	}		
}
