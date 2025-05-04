#ifndef CA_HW3_SOLUTION_ARRAY
#define CA_HW3_SOLUTION_ARRAY

#include<stdio.h>


void print_array(int a[], int n){

    int i;

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}


void read_array(int a[], int n){
    int i;

    for(i=0; i<n; i++){
        scanf(" %d", &a[i]);
    }
}

#endif