#include <stdio.h>

int main(){
	 int myArray[5];
	 int i,reps,j,found;
	 int repsArr[5];
	 for(i=0;i<5;i++){
  		printf("Enter number %d = ",i+1);
  		scanf("%d",&myArray[i]);
  }
  for(i=0;i<5;i++){
  	reps=0;
  	found=0;
  	for(j=0;j<5;j++){
	  		if(myArray[i] == repsArr[j]){
		  		found=1;
		  	}
	  }
	  if(found == 0){
  		for(j=0;j<5;j++){
	  		if(myArray[i] == myArray[j]){
		  			reps++;
		  	}
	  }
  	}
	  repsArr[i] = myArray[i];
	  if(reps>1){
  			printf("Number %d repeated %d times \n",myArray[i],reps);
  	}
  }
}
