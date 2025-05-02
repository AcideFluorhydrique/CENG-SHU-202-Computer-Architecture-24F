#include <stdio.h>

int main(){
    int n;

    printf("Please input an integer: \n");
    scanf("%d", &n);

    if(n==42){
        printf("Well done\n");
    } else {
        printf("lost\n");
    }
    return 0;
}