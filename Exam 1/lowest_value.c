#include<stdio.h>

int main(){
	
    int a;
     printf("Enter A:");
     scanf("%d",&a);
     
    int b;
     printf("Enter B:");
     scanf("%d",&b);
     
    int c;
     printf("Enter C:");
     scanf("%d",&c);
     
     
     if( a<b ){
     	 if( a<c){
     	 	printf("A is lowest value");
		  }
		  
		  else{
		  	printf("c is lowest value");
		  }
     }
     
    else if( b<a){
    	if( b<c){
    		printf("B is lowest value");
		}
		else{
		  	printf("c is lowest value");
		  }
	}
	
	
	return 0;
}
