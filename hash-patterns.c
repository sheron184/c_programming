#include<stdio.h>

void main(){
			int i=0,j=0,k=0,l=0;
			int arr[4] = {6,3,5,4}; 
			/*
			while(i<6){
					printf(" #");
					i++;
			}
			while(j<3){
				printf(" # \n");
				j++;
			}
			while(k<5){
				printf(" #");
				k++;
			}
			while(l<4){
				printf(" # \n");
				l++;
			}
			*/
			while(i<4){
					while(j<arr[i]){
							if(arr[i] == 3 || arr[i] == 4){
									printf("# \n");
							}else{
									printf("#");
							}
							j++;
					}
					j=0;
					i++;
			}
				
}
