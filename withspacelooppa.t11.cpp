#include<stdio.h>
main(){
	int a,b,c;
	for(b=5; b>=1; b--){
		for(c=5; c>b; c--){
         printf("  ");
}
         for(a=b; a>=1; a--){
		printf("%c ",'*');
	}	
	printf("\n");		
	}		
}
