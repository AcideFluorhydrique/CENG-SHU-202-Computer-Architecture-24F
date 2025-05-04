#include <stdio.h>


int power(int x, int n){
    int i, res;
    res = 1;
    for(i=0; i<n; i++){
        res *= x;
    }
    return res;
}


int eval(int x, int a[], int n){
    int i, res;

    res=0;
    for(i=0; i<n; i++){
        res += a[i]*power(x, i);
    }
    return res;

}

int eval_n_limit(int x, int a[], int n){
    int i, res;
    res = 0;

    for(i=n-1; i>=0; i--){
        res *= x;
        res += a[i];
    }
    return res;
}


int main(){
    int i, res;
    int arr[] = {32, 13, 14};

    res = eval(2, arr, 3);
    printf("The result is %d\n", res);

    res = eval_n_limit(2, arr, 3);
    printf("The result is %d\n", res);
    

}