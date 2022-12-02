#include<stdio.h>
main(){
	int a,b,c;
	for(b=1; b<=5; b++){
		for(c=5; c>b; c--){
            printf("  ");
}
			for(a=1; a<=b; a++){			
				printf("%c ",'*');			
		}				
			printf("\n");			
	}		
}
