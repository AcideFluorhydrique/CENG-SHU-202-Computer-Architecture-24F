#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int i;

    srand((unsigned)time(NULL));

    for(i=0; i<10; i++){
        printf("%d ", rand() % 6 + 1);
    }
    printf("\n");
}