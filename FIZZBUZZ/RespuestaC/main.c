#include <stdio.h>
void FIZZBUZZ(int n);

void main(void){
    FIZZBUZZ(100);
}

void FIZZBUZZ(int n){
    for (int i = 1; i <= n; i++) {
        int fiz= i%3==0;
        int buz= i%5==0;
        if(fiz && buz){
            printf("FIZZBUZZ\n");
        }else if(fiz){
            printf("FIZZ\n");
        }else if(buz){
            printf("BUZZ\n");
        }else{
            printf("%d\n",i);
        }
    }
    
}