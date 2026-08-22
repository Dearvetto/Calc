 #include <stdio.h>

    int main() {
        char op;
        double num1, num2, result;
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);
        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);
        switch(op) {
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

                if (num2 == 0) {
            printf("Error division by zero\n"); 
            } 
            else result = num1 / num2;
                break; 

            default: printf("Invalid operator\n");
                return 1;
        }
        printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);
        return 0;
    }   