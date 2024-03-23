
#include<stdio.h>

int calculate(char mark){
    int number1, number2, result;
    printf("Enter your number :\n");
    scanf("%d",&number1);
    printf("%c\n",mark);
    scanf("%d",&number2);
    if(mark=='+')
    {
        result=number1+number2;
    } else if(mark=='-')
    {
        result=number1-number2;
    } else if(mark=='*')
    {
        result=number1*number2;
    } else {
        result=number1/number2;
    }
    return result;
}

char operationSelector(){
    char mark;
    printf("Which operation would you like to perform ?\n You can only try '+' , '-' , '*' , or '/'\n Now Enter your choice : \n");
    scanf("%c",&mark);
    return mark;
}

int main(){
    calculatorHandle();
    return 0;
}

void calculatorHandle(){
    printf("Start calculating...");
    char mark;
    int finalResult, tryAgain;
    mark = operationSelector();
    if (mark=='+' || mark=='-' || mark=='*' || mark=='/')
    {
        finalResult = calculate(mark);
        printf("Your result is : %d\n",finalResult);
    } else {
        printf("Sorry sir. You selected an invalid operation");
    }
}