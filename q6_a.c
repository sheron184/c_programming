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
  int oddNumbers[odds];
  int evenNumbers[evens];
  evens=0;
  odds=0;
  for(i=0;i<5;i++){
  	if(myArray[i]%2 == 0){
	  	evenNumbers[evens] = myArray[i];
	  	evens++;
	  }else{
  		oddNumbers[odds] = myArray[i];
  		odds++;
  	}
  }
  lenEven = sizeof(evenNumbers)/sizeof(evenNumbers[0]);
  lenOdd = sizeof(oddNumbers)/sizeof(oddNumbers[0]);
  printf("Even numbers => ");
  for(i=0;i<lenEven	;i++){
			printf(" %d ",evenNumbers[i]);
		}
		printf("\n");
		printf("Odd numbers => ");
  for(i=0;i<lenOdd	;i++){
			printf(" %d ",oddNumbers[i]);
		}
		printf("\n");
  
   
}
