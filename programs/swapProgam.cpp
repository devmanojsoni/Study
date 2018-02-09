/*
    A simple solution is to iterate over
    elements of both arrays and swap them
    one by one.
    A quick solution is to use std::swap().
    It can directly swap arrays if they are
    of same size.

*/
#include<iostream>
#include<utility> // to use std::swap()
using namespace std;

int main(){
    // Declare and assign two arrays
    int A[] = {7,5,4,1,2,3};
    int B[] = {9,9,9,6,6,6};
    int sizeOfA = sizeof(A)/sizeof(A[0]);
    
    // Not required, just for the logic i have added
    int sizeOfB = sizeof(B)/sizeof(B[0]);
    
    // Print before swapping
    for(int i=0; i<6; i++){
    cout<<A[i]<<" ";
        if(i==5){
            cout<<"\n Array A[] is printed as declared in main()"<<endl;
        }
    }
    // Print before swapping
    for(int j=0; j<6; j++){
    cout<<B[j]<<" ";
        if(j==5){
            cout<<"\n Array B[] is printed as declared in main()"<<endl;
        }
    }
    //Now swap
    if (sizeOfA == sizeOfB){ 
    // Note that std::swap() can directly swap if the array are of same size
    // so this condition is not required
        swap(A,B);
        cout << "\n After swaping we have" << endl;
        cout << "A[] = ";
        for (int i=0; i<sizeOfA; i++){
            int check = i;
            cout << A[i] << " ";
                if(check==(sizeOfA-1)){
                cout<<"\n "<<endl;
                }
        }
        cout << "B[] = ";
        for (int i=0; i<sizeOfB; i++)
            cout << B[i] << " ";
    }
    
}