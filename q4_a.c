#include <stdio.h>
int main(){
	 int myArray[5];
	 int i,j,n;
	 int sorted_index[5];
	 int sortedArray[5];
	 for(i=0;i<5;i++){
  		printf("Enter number %d = ",i+1);
  		scanf("%d",&myArray[i]);
   }
   for(i=0;i<5;i++){
   	 j=0;
   	 n=0;
   		while(j<5){
		   		if(myArray[i]<myArray[j]){
		   			  n++;
		   		}
		   		j++;
		   }
		   sorted_index[i] = n;
   }
   for(i=0;i<5;i++){
   	sortedArray[sorted_index[i]] = myArray[i];
   }
   printf("\n");
   for(i=0;i<5;i++){
   	printf("SortedArray[%d] = %d \n",i,sortedArray[i]);
   }
   
   
   
}
