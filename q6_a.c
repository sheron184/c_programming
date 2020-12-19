#include <stdio.h>

int main(){
	 int myArray[5];
	 int i,odds=0,evens=0,lenEven,lenOdd;
	 for(i=0;i<5;i++){
  		printf("Enter number %d = ",i+1);
  		scanf("%d",&myArray[i]);
  }
  for(i=0;i<5;i++){
  	if(myArray[i]%2 == 0){
	  	evens++;
	  }else{
  		odds++;
  	}
  }
  printf("There are %d even numbers \n",evens);
  printf("There are %d odd numbers \n",odds);
  
   
}
