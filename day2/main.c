#include<stdio.h>

void addition(void);
void substraction(int,int);
int multi(void);
float division(int,int);

int main(){
    int num1, num2;

    char ch;

    printf("Enter the option (+ , - , * , /)");
    scanf("%c",&ch);


    switch(ch){
        case '+' :
            addition();
            break;

        case '-' :
            printf("Enter two no.");
            scanf("%d%d",&num1,&num2);
            substraction(num1,num2);
            break;

        case '*' :
            printf("Addition of two no. %d", multi());
            break;
        
        case '/' :
            printf("Enter two no.");
            scanf("%d%d",&num1,&num2);
            printf("division of two no. %f", division(num1,num2));
            break;
        default : printf("Enter correct option!");
    }
}


void addition(void){
    int num1, num2;

    printf("Enter two no.");
    scanf("%d%d",&num1,&num2);

    printf("Addition is: %d",num1+num2);

}

void substraction(int a, int b){

    printf("substraction is: %d ",a-b);

}

int multi(void){
    int num1, num2;

    printf("Enter two no.");
    scanf("%d%d",&num1,&num2);

    return num1*num2;

}

float division(int a, int b){

    return a/b;

}






// #include<stdio.h>

// static int count=0;
// int main(){
//     int count=5;
//     printf("Count %d",count);
//     count++;
//     while(count!=0){
//         main();
//         count--; 
//     }
// }



// //int count;
// extern int count;
// extern void write_extern();


// int main(){
//     count=5;
//     write_extern();
//     return 0;
// }
