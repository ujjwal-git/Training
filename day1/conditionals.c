#include<stdio.h>

int main(){
    int num1, num2;
    char iChoice;

    printf("Enter two numbers\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("Addition[+]\nSubstraction[-]\nMultiplicaion[*]\nDivision[/]");
    printf("\nEnter your chioce\n");

    fflush(stdin);

    scanf("%c",&iChoice);

    switch(iChoice){
        case '+':
                printf("Addition of two numbers is: %d", num1+num2);
                break;
        case '-':
                printf("Substration of two numbers is: %d", num1-num2);
                break;
        case '*':
                printf("Multiplication of two numbers is: %d", num1*num2);
                break;
        case '/':
                printf("Division of two numbers is: %d", num1/num2);
                break;
        default:
                printf("Invalid chioce\n");
                
    }










    // int num1, num2;
    // char choice;

    // printf("Enter first nos.");
    // scanf("%d",&num1);
    // printf("Enter second nos.");
    // scanf("%d",&num2);

    // printf("Enter the choice of operation(+, -, *, /)");
    // scanf("%c",&choice);


    // if(choice == '+')
    //     printf("Addition:%d", num1 + num2);
    // else if(choice == '-')
    //     printf("Substraction:%d", num1 - num2);
    // else if(choice == '*')
    //     printf("Multiplication:%d", num1 * num2);
    // else if(choice == '/')
    //     printf("Division:%d", num1 / num2);



    // int num1, num2, num3, num4;

    // printf("Enter four nos.");
    // scanf("%d%d%d%d",&num1,&num2,num3,num4);
    
    // if(num1 < num2 && num1 < num3 && num1 < )
    //     if(num)

    return 0;
    
}