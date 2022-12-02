#include<stdio.h>
main(){	
	int r,c,rc;	
	for(c=1; c<=5; c++){
		for(rc=5; rc>c; rc--){
    	printf("  ");
    }
        for(r=1; r<=c; r++){
		printf("%i ",r);
	}	
	   printf("\n");	
	}		
}
