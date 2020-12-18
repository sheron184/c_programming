#include <stdio.h>

int main(){
	 int myArray[5];
	 int i,sum=0;
	 int *p;
	 for(i=0;i<5;i++){
  		printf("Enter number %d = ",i+1);
  		scanf("%d",&myArray[i]);
  }
  p=myArray;
  for(i=0;i<5;i++){
  	sum = sum + *(myArray+i);
  }
  printf("Sum = %d \n",sum);
}
