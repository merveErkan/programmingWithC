#include <stdio.h>
	float sum(float num1, float num2){
		float num3 = num1 + num2;
		return num3;
	}
	float subtract(float num1, float num2){
		float num3 = num1- num2;
		return num3;
	}
	float multiply(float num1, float num2){
		float num3 = num1 * num2;
		return num3;
	}
	float divide(float num1, float num2){
		float num3 = num1 / num2;
		return num3;
	}
	int main(){
		float num1, num2, result;
		int process;
		printf("choose process(+, -, *, /):");
		scanf("%c", & process);
		printf("enter num1 and num2:\n");
		scanf("%f", & num1);
		scanf("%f", & num2);
		switch(process)
    {
        case '+':
            result = sum(num1, num2);
            printf("%.1lf + %.1lf = %.1lf",num1, num2, result);
            break;

        case '-':
            result = subtract(num1, num2);
            printf("%.1lf - %.1lf = %.1lf",num1, num2, result);
            break;

        case '*':
            result = multiply(num1, num2);
            printf("%.1lf * %.1lf = %.1lf",num1, num2, result);
            break;

        case '/':
            result = divide(num1, num2);
            printf("%.1lf / %.1lf = %.1lf",num1, num2, result);
            break;

        default:
            printf("not correct");
    }
		return 0;
	}
		
