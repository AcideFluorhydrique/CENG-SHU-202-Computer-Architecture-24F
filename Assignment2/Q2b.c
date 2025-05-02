#include <stdio.h>

int main(){
    int n, i, j, f;

    printf("Please input an integer: \n");
    scanf("%d", &n);

    if(n==0){
        printf("%d! = %d\n", 0, 1);
        return 0;
    }

    for(i=1; i<=n; i++){
        f = 1;
        for(j=1; j<=i; j++){
            f = f * j;
        }
        printf("%d! = %d\n", i, f);
        
    }
    return 0; 
}