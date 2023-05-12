#include <stdio.h>

int main(){
	
	char operator;
	int a, b;
	
	printf("Enter the operation perform ");
	scanf("%c", &operator);
	
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	switch(operator){
		case '+':
		printf("The answer is: %d\n", a+b);
		break;
		
		case '-':
		printf("The answer is: %d\n", a-b);
		break;
		
		case '/':
		printf("The answer is: %d\n", a/b);
		break;
		
		case '*':
		printf("The answer is: %d\n", a*b);
		break;
		
		default:
			printf("Invalid operator");
	}
	
	 
	return 0;
	
}
