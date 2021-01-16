#include <stdio.h>
void main(){
    int dc,i,len,remain,t_nd;
    
    printf("Enter the decimal number = ");
    scanf("%d",&dc);
    //first find the length of the array we need to store
    t_nd = dc;
    //to find length we need to find how many times the number can be devided
    i=0;
    while(t_nd>=1){
    	i++;
    	t_nd = t_nd/2;
    }
    //then declare the array
    int binar[i];
   
    //then start to devide untill the devided number equal to 1
    i=0;
    while(dc>=1){
    	binar[i] = dc%2; //this will store 1 or 0
    	dc = dc/2; //keep deviding by 2 untill it becomes 1
    	i++;
    }
    
    len = sizeof(binar)/sizeof(binar[0]);
    printf("Binary number = ");
    for(i=len-1;i>=0;i--){ // start from the end of array
    	printf("%d",binar[i]);
    }
    printf("\n");
     
}
