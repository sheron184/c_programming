#include <stdio.h>

int main() {
   int myArray[5]; 
   int i,sum,j,a=0,lg_num=0,second_lg_num=0;
   
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
       if(a>3){
           printf("Largest number = %d \n",myArray[i]);
           lg_num=1;
       }else if(a>2){
           printf("Second largest number = %d \n",myArray[i]);
           second_lg_num=1;
       }
       a=0;
   }
}
