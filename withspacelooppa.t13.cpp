#include<stdio.h>
main(){
	int a,b,c;
	for(b=1; b<=5; b++){
		for(c=5; c>b; c--){
           printf("  ");
}
    for(a=b; a>0; a--){
		printf("%c ",'A'+a-1);	
	}	
		printf("\n");		
	}	
}
