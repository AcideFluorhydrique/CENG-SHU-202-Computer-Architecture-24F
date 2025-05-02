#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int i, j, r, count_6=0;

    srand((unsigned)time(NULL));

    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            r = rand() % 6 + 1;
            printf("%d ", r);
            if(r==6){count_6++;}
        }
        printf("\n");
    }
    printf("The number of 6s is %d\n", count_6);
    return 0;
}