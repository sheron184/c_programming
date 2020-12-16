#include <stdio.h>

int main() {
   int myArray[5]; 
   int i,j,a=0;
   
   for(i=0;i<5;i++){
       printf("Enter number %d = ",i+1);
       scanf("%d",&myArray[i]);
   }
   for(i=0;i<5;i++){
       j=0;
       while(j<5){
           if(myArray[i]>myArray[j]){
               a++;
           }
           j++;
       }
       if(a==0){
           printf("smallest number = %d \n",myArray[i]);
       }
						 if(a==3){
           printf("Second largest number = %d \n",myArray[i]);
       }
       a=0;
   }
}
