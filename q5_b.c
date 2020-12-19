#include <stdio.h>
#include<stdbool.h>  
int sort_array(int* arr[5]){
		int i,j,n;
	 int sorted_index[5];
	 int sortedArray[5];
	 int myArray[5];
	 for(i=0;i<5;i++){
				myArray[i] = arr[i];
		}
   for(i=0;i<5;i++){
   	 j=0;
   	 n=0;
   		while(j<5){
		   		if(arr[i]>arr[j]){
		   			  n++;
		   		}
		   		j++;
		   }
		   sorted_index[i] = n;
   }
   for(i=0;i<5;i++){
   	arr[sorted_index[i]] = myArray[i];
   }
}
int main(){
	 int myArray[5];
	 int sorted_arr[5];
	 int i,query,mid;
	 int *p;
	 bool found;
	 found = false;
	 for(i=0;i<5;i++){
  		printf("Enter number %d = ",i+1);
  		scanf("%d",&myArray[i]);
  }
  printf("Enter the number you want to search for = ");
  scanf("%d",&query);
  
   sort_array(myArray);//i passed the array into a function to sort.i used pointers to get the sorted array. because there are no such way to return an array in c.
  	mid = 5/2;
			if(query>myArray[mid]){
  		for(i=3;i<5;i++){
		  	if(query == myArray[i]){
	  				found = true;
	  		}
		  }
  }else{
  		for(i=0;i<2;i++){
		  	if(query == myArray[i]){
	  			found = true;
	  		}
		  }
  }
  if(found == false){
  	if(query == myArray[2]){
	  	found = true;
	  }
  }
  if(found == true){
  	printf("Found \n");
  }else{
  	printf("Not found \n");
  }
   
}
