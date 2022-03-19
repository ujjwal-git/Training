#include<stdio.h>
int fun();
int main(){

    printf("\nValue %d",fun());
    printf("\nValue %d",fun());

    return 0;
}


int fun(){
    static int count=0;
    return count++;
}




// #include<stdio.h>
// #include<stdlib.h>

// int main(){

//     int i;
//     for(i=0;i<5;i++){
//         show();
//     }
//     return 0;
// }

// void show(){
//     static int temp=100;

//     printf("\nTEMP %d",temp);
//     temp++;
// }



// void showCounter(void);
// static int counter=0;
// int main(){

//     while(counter--){
//         showCounter();
//     }
//     return 0;

// }

// void showCounter(void){
//     static int i=5;
//     i++;
//     printf("Value of counter:- %d and i;- %d")
//}