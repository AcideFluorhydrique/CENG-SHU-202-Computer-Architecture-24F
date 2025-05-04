#include <stdint.h>
#include "array.h"

void insertion_sort(int a[], int n){
    int i,m;
    int temp;

    for (m=1; m<n; m++){
        for(i=0; i<m; i++){
            if(a[i]>a[m]){
                temp = a[i];
                a[i] = a[m];
                a[m] = temp;
            }
        }
    }
}

int main() {
    int n=5; 
    int arr[5];
    
    printf("Please input %d integers: ", n);
    read_array(arr, n);

    insertion_sort(arr, n);

    print_array(arr, n);

    

}