#include<iostream>
using namespace std;

int BubbleSort(int A[], int n){
    for(int i=0; i<(n-1); i++){ // (n-1 passes)
        for(int j=0; j<(n-1); j++){ // (n-1) iterations
            if(A[j]>A[j+1]){
                //Swap the elements
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

}

int main(){
    int A[] = {6,5,4,3,2,1};
    BubbleSort(A,6);
    for(int i=0; i<6; i++)
    cout<<A[i]<<" ";
}