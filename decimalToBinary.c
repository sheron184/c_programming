#include <stdio.h>
void main(){
    int dc,i,len,remain,t_nd;
    
    printf("Enter the decimal number = ");
    scanf("%d",&dc);
    
    t_nd = dc;
    
    i=0;
    while(t_nd>=1){
    	i++;
    	t_nd = t_nd/2;
    }
    
    int binar[i];
    
    i=0;
    while(dc>=1){
    	binar[i] = dc%2;
    	dc = dc/2;
    	i++;
    }
    
    len = sizeof(binar)/sizeof(binar[0]);
    printf("Binary number = ");
    for(i=len-1;i>=0;i--){
    	printf("%d",binar[i]);
    }
    printf("\n");
     
}
