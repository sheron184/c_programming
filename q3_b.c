#include <stdio.h>
int main(){
	 int myArray[5];
	 int remove_num,j,i;
	 
	 for(i=0;i<5;i++){
       printf("Enter number %d = ",i+1);
       scanf("%d",&myArray[i]);
   }
   printf("Which number you want to remove = ");
   scanf("%d",&remove_num);
   for(i=0;i<5;i++){
   	if(remove_num == myArray[i]){
	   	break;
	   }
   }
   
   if(i<5){
   		for(j=0;j<=5-i;j++){
		   	myArray[i] = myArray[i+1];
		   	i++;
	    }
   }
   printf("New array => ");
   for(i=0;i<4;i++){
   	printf("%d ",myArray[i]);
   }
   printf("\n");
}
