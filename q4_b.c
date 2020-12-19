#include <stdio.h>

int main(){
	 int myArray[6];
	 int i,*p1,*p2,temp;

	 for(i=0;i<6;i++){
  		printf("Enter number %d = ",i+1);
  		scanf("%d",&myArray[i]);
  }
  for(i=0;i<6;i=i+2){
  		p1 = &myArray[i];
  		p2 = &myArray[i+1];
  		temp = *p1;
  		*p1=*p2;
  		*p2=temp;
  }
  for(i=0;i<6;i++){
  	printf("%d \n",myArray[i]);
  }
}
