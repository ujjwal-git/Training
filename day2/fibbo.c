#include<stdio.h>

void fibbo(int);

int main(){
    int count;

    printf("Enter the no. of terms of fibonacci series: ");
    scanf("%d",&count);

    fibbo(count);

    return 0;

}

void fibbo(int c){

    int lastTerm=1, currTerm=1; 
    printf("1, 1");
    while(c != 0){
        currTerm = lastTerm+currTerm;
        printf(" %d,",currTerm);
        

    }
}