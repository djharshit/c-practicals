#include <stdio.h>
int main(){
    int num1, num2, result;
    char op;
    printf("Enter the values of operands num1 and num2\n");    
    scanf("%d %d", &num1, &num2);
    printf("+ for add\n");
    printf("- for subtract\n");
    printf("* for multiply\n");
    printf("/ for divide\n");
    scanf("%c", &op);
    switch(op){
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        result = num1 / num2;  
        break;
        default:
        printf("Invalid Operator\n");    
     }
     printf("The value = %d", result);
     return 0; 
	}
