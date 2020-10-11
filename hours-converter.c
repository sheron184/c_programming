#include<stdio.h>

void main(){
			int days,years,weeks,hours;
			
			printf("Enter the number of hours ");
			scanf("%d",&hours);
			
			days  = hours/24;
			weeks = days/7;
			years = days/365;
			
			printf("Number of days = %d \n",days);
			printf("Number of weeks = %d \n",weeks);
			printf("Number of years = %d \n",years);
			
			
				
}
