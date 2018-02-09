#include<iostream>
using namespace std;

/*
        "bubbleSort" function is not optimized
        The below function always runs O(n^2) time even if the array is sorted.
        It can be optimized by stopping the algorithm if inner loop didn’t cause any swap.
*/
void bubbleSort(int A[], int n){
    for(int i=0; i<(n-1); i++){ // (n-1 passes)
        for(int j=0; j<(n-1); j++){ // (n-1) iterations //or use (n-i-1)
            if(A[j]>A[j+1]){
                //Swap the elements
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

}
/*
    Optimized, won't run O^2 if the array is already sorted 
*/
void betterBubbleSort(int A[], int n){
    bool swaped; // Improvement to check if already sorted
    for(int i=0; i<(n-1); i++){ // (n-1 passes)
        swaped = false;
        for(int j=0; j<(n-i-1); j++){ // Improvement: j<(n-i-1)
            if(A[j]>A[j+1]){
                //Swap the elements
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                swaped = true;// Improvement
                // if swaped then it was not already sorted
            }
        }
        // Improvement
        // IF no two elements were swapped by inner loop, then break
        if (swaped == false)
        break;
    }

}

int main(){
    int A[] = {6,5,4,3,2,1};
    betterBubbleSort(A,6); // call the optimized function 
    for(int i=0; i<6; i++)
    cout<<A[i]<<" ";
}
/*
    Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
    Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
    Auxiliary Space: O(1)
    Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.
    Sorting In Place: Yes
    Stable: Yes
    Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm.
*/