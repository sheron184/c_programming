#include <stdio.h>
int main(){
	 int myArray[5];
	 int i,query;
	 for(i=0;i<5;i++){
  		printf("Enter number %d = ",i+1);
  		scanf("%d",&myArray[i]);
  }
  printf("Enter the number you want to search = ");
  scanf("%d",&query);
  printf("Searching... \n");
  for(i=0;i<5;i++){
  	if(myArray[i] == query){
	  	printf("Found at position %d \n",i+1);
	  }
  }
   
   
   
}
