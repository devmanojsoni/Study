/*  Simple swapping between A[i] and A[j]
    // int temp = A[i];
    // A[i] = A[j];
    // A[j] = temp;

    // Other way - call a swap fuction
    // This is not swapping two arrays, but
    // swapping the elements of an array */
#include<iostream>
using namespace std;

void swap(int *xp, int *yp) { // e.g *xp = &A[0], *yp=&A[1]
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main() {
    int A[] = {64, 34};
    swap(&A[0], &A[1]);
    cout << A[0] << endl;
    cout << A[1] << endl;
    // return 0; // if using #include<stdio.h>
    /*
    In this case, no "return 0;" is required
    #include<iostream>
    using namespace std;
    */
}
