#include <stdio.h>

int main() {
   int myArray[10]; 
   int i,len1,len2,even=0,odd=0;
   for(i=0;i<10;i++){
       printf("Enter number %d = ",i+1);
       scanf("%d",&myArray[i]);
   }
   for(i=0;i<10;i++){
   	if(myArray[i]%2==0){
	   	even++;
	   }else{
   		odd++;
   	}
   }
   int arrEven[even];
   int arrOdd[odd];
   even=0;
   odd=0;
   for(i=0;i<10;i++){
   	if(myArray[i]%2==0){
   		arrEven[even] = myArray[i];
	   	even++;
	   }else{
	   	arrOdd[odd] = myArray[i];
   		odd++;
   	}
   }
   len1 = sizeof(arrOdd)/sizeof(arrOdd[0]);
   len2 = sizeof(arrEven)/sizeof(arrEven[0]);
   printf("Odd numbers = ");
   for(i=0;i<len1;i++){
   		printf("%d, ",arrOdd[i]);
   }
   printf("\n");
   printf("Even numbers = ");
   for(i=0;i<len2;i++){
   		printf("%d, ",arrEven[i]);
   }
   printf("\n");
   
}
