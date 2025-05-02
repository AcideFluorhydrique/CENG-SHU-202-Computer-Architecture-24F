#include <stdio.h>

int main(){
    int n, i, f=1;

    printf("Please input an integer: \n");
    scanf("%d", &n);

    if(n==0){
        printf("%d! = %d\n", 0, 1);
        return 0;
    }

    for(i=1; i<=n; i++){
        f = f * i;
    }
    printf("%d! = %d\n", n, f);
    
}