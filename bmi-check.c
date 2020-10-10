#include<stdio.h>

void main(){
				int weight;
				float height,bmi;
				
				printf("Enter height = ");
				scanf("%f",&height);
				printf("Enter weight = ");
				scanf("%d",&weight);
				
				bmi = weight/(height*height);
				printf("Your bmi = %f \n",bmi);
			
				if(bmi<18.5){
					printf("You are under weight \n");
				}else if(bmi>18.5 && bmi<25){
					printf("You are Normal \n");
				}else if(bmi>25 && bmi<30){
					printf("You are Overweight \n");
				}else if(bmi>30){
					printf("You are Obese \n");
				}
				
}
