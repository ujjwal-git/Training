
#include<stdio.h>

int addition(int,int);

int main(){
    int val1, val2;
    printf("Enter two no.");
    scanf("%d%d",&val1,&val2);

    printf("Addition of two numbers %d",addition(val1,val2));

}

int addition(int num1, int num2){
    return num1+num2;
}







// #include<stdio.h>

// int addition(void);

// int main(){

//     printf("Result is %d",addition());
//     return 0;
// }

// int addition(void){
//     int val1,val2;
//     printf("Enter two values: ");
//     scanf("%d%d",&val1,&val2);

//     return (val1+val2);

// }







// #include<stdio.h>

// void addition(int,int);

// int main(){
//     int val1,val2;
//     printf("Enter two values: ");
//     scanf("%d%d",&val1,&val2);

//     addition(val1,val2);

//     return 0;

// }

// void addition(int num1,int num2){
//     printf("Addition is %d",num1+num2);
// }







// void cateres(void); //declaration of user defined function
// void cateres(int); //declaration of user defined function


// int main(){
//     printf("\nMain is called");
//     cateres();  //..callng of user-defined function
//     cateres(10);  //..callng of user-defined function
//     return 0;

// }

// void cateres(void   ){  //..defination of function

//     printf("\ncateres is called");
// }




//#include<stdio.h>

// void display(void);
// int main(){
//     display();
// }

// void display(void){

//     for(int i=1; i<=20; i++){
//         printf("\n%d",i);
//     }

// }

