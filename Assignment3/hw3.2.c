#include<stdio.h>

int linear_search(int a[], int length, int val){
    int i;

    for(i=0; i<length; i++){
        if(a[i]==val){
            return i;
        }
    }
    return -1;

}

int is_sorted(int a[], int length){
    int i;

    for(i=1; i<length; i++){
        if(a[i]<a[i-1]){
            return 0;
        } 
    }
    return 1;
}

int binary_search(int a[], int length, int val){
    int i, m, s=0, b=length-1;

    for(i=0; s<=b; i++){
        m = (s+b)/2;
        if(a[m]==val){
            return m;
        }
        else{
            if(a[m]<val){
                s = m+1;
            }
            else{
                b = m-1;
            }
        }
    }
    return -1;
}


int main(){
    int n = 10;
    // int arr[] = {1, 2, 8, 19, 20, 0, 3, 4, 7, 6};
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int val, res;

    printf("Please input the integer you want to search: " );
    scanf(" %d", &val);

    res = linear_search(arr, n, val);
    printf("The index of %d is %d\n", val, res);

    res = is_sorted(arr, n);
    printf("The array is sorted? %d\n", res);

    res = binary_search(arr, n, val);
    printf("The index of %d is %d\n", val, res);

}

