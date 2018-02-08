/* Example of Selection Sort Algorithm
   Time complexity of Selection Sort is o(n^2)
   i.e Big Oh of n-Square (say)
   Big Oh of n-square is not considered the
   best running time for an algorithm.
   Therefore, Selection Sort is Slow
   
   Code Improvement: "(n-2)" for the first loop, instead of "(n-1)"
*/
/* #######################Starts here######################### */
#include<iostream>
using namespace std;

/* Uncomment this function if you wish to use this
  void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    }
*/

void SelectionSort(int A[], int n){
    for(int i=0; i<(n-2); i++){ // Enter the first pass
        int iMin = i;// Say i(th) is the minimum element,
        // In first case say index 0 is the minimum
        
        /* Start from (i+1)th index, 
           and go all the way upto length of the left part
           of the array (say, from i+1th all the way upto nth)
        */
        for(int j=i+1; j<n; j++){ // Iteration
            if(A[j] < A[iMin]) // Compare
            /* Even though the iteration starts from
               i+1th index, but it 
               compare the 0th index to 1th index also
            */
            
            // Then (If you found the minimum) 
            iMin = j; // update the index of minimum element
        }
        /* Simple swapping between
           A[i] and A[iMin]
        */
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
        /*
            // Or use this call function here
            swap(&arr[min_idx], &arr[i]);
            
            // if you wish to use the above function
            // uncomment the swap function
        */
    }
}
int main(){
    int A[] = {7,5,4,1,2,3};
    SelectionSort(A,6);
    for(int i=0; i<6; i++)
    cout<<A[i]<<" ";
}

/* #######################Ends here######################### */

/* References
  MyCodeSchool
  https://www.youtube.com/watch?v=GUDLRan2DWM
  
  
  Algorithm World
  https://www.youtube.com/watch?v=s5P3uZBexKM
  
  randerson112358
  https://www.youtube.com/watch?v=p2ZACFqMZlI

  Himanshu Sir
  https://www.youtube.com/watch?v=Zbo4__XZEeM&t=187s

  Saurabh Shukla Sir
  https://www.youtube.com/watch?v=_lqhHiPmg6g

  
  
*/