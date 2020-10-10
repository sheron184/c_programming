#include<stdio.h>

void main(){
	
			int *is_int;
			is_int = 1;
			int length,i = 0;
			char a[50];
			char mrk[1] = {"."};
	
			printf("enter number ");
			scanf("%s",&a);
			length = strlen(a);
			
			while(i<length){
					if(a[i] == mrk[0]){
						is_int = 0;
						break;
			 	}
				i++;
			}
			
			if(is_int == 1){
				printf("It's a int type number \n");
			}else if(is_int == 0){
				printf("it's a float type number \n");
			}
			
}
