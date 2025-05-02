#include<stdio.h>


int fib(int n){
    int a, b;

    if(n==0||n==1){
        return 1;
    }else{
        a = fib(n-1);
        b = fib(n-2);
        return a+b;
    }
    return 0;
}


int main(){
    int i, n;

    printf("Please input an integer: \n");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}

