#include<stdio.h>
main(){
	int a,b,c;
	for(b=1; b<=5; b++){
		for(a=1; a<=b; a++){
			printf("%i ",a);
	}
		for(c=5; c>b; c--){
        	printf("    ");
}
        for(a=b; a>0; a--){
			printf("%i ",a);
	}	
		printf("\n");	
	}	
}
