// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1,num2,result,remain;
    char operator[1];
    
    printf("Enter the operator(+,-,*,/) = ");
    scanf("%c",&operator);
    
    printf("Enter the first number = ");
    scanf("%d",&num1);
    
    printf("Enter the second number = ");
    scanf("%d",&num2);
    
    if(operator[0] == '+'){
        result = num1 + num2;
    }else if(operator[0] == '-'){
        result = num1 - num2;
    }else if(operator[0] == '*'){
        result = num1 * num2;
    }else if(operator[0] == '/'){
        result = num1/num2;
        remain = num1%num2;
    }
    printf("result = %d \n",result);
    if(remain != 0){
        printf("Remainder = %i \n",remain);
    }
    
}
