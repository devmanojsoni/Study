/*
    C++ program to better understand "for loops"
    -- Simulation of "for loop"
    Written by Manoj Kumar
    
*/

//#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

string showMsgPostPlus(int i, int n, int ret){
    string strConcatPlus; //++
    string strConcatPlusEQ; //++
    string strConcatMinus;//--
    string strConcatMinusEQ;
    string strIs; //c
    string strSpace; //c
    string strLessThan; //c
    string strGreaterThan; //--
    string strYes; //c
    string strComma1; //c
    string strBody; //c
    string strIncr; //++
    string strDcr;//--
    strIs = "Is"; //c
    strSpace = " "; //c
    strLessThan = "<"; //++
    strGreaterThan = ">";//--
    strYes = "Yes"; //c
    strComma1 = ","; //c
    strBody = "excute body"; //c
    strIncr = "i++"; //++
    strDcr = "i--";//--
    //++
    strConcatPlus = strIs + strSpace + to_string(i) + strLessThan + to_string(n) + strSpace + strYes + strComma1 + strSpace + strBody + strComma1 + strIncr ;
    //--
    strConcatMinus = strIs + strSpace + to_string(i) + strGreaterThan + to_string(n) + strSpace + strYes + strComma1 + strSpace + strBody + strComma1 + strDcr ;

    string strGreaterThanEQ;
    strGreaterThanEQ = ">=";
    strConcatMinusEQ = strIs + strSpace + to_string(i) + strGreaterThanEQ + to_string(n) + strSpace + strYes + strComma1 + strSpace + strBody + strComma1 + strDcr ;

    string strLessThanEQ;
    strLessThanEQ = "<=";
    strConcatPlusEQ = strIs + strSpace + to_string(i) + strLessThanEQ + to_string(n) + strSpace + strYes + strComma1 + strSpace + strBody + strComma1 + strIncr ;

    string strPlusEnd;//++
    string strPlusEndEQ;
    string strMinusEnd;//--
    string strMinusEndEQ;//--
    string strNo; //c
    string strNoEntry; //c
    string strNoIncr;//++
    string strNoDcr;//--
    strNo = "No"; //c
    strNoEntry = "No entry to the loop"; //c
    strNoIncr = "Not Incremented"; //++
    strNoDcr = "Not Decremented";//--
    //++
    strPlusEnd = strIs + strSpace + to_string(i) + strLessThan + to_string(n) + strSpace + strNo + strComma1 + strSpace + strNoEntry + strComma1 + strSpace + strNoIncr;

    strPlusEndEQ = strIs + strSpace + to_string(i) + strLessThanEQ + to_string(n) + strSpace + strNo + strComma1 + strSpace + strNoEntry + strComma1 + strSpace + strNoIncr;
    //--
    strMinusEnd = strIs + strSpace + to_string(i) + strGreaterThan + to_string(n) + strSpace + strNo + strComma1 + strSpace + strNoEntry + strComma1 + strSpace + strNoDcr;
    
    //--
    strMinusEndEQ = strIs + strSpace + to_string(i) + strGreaterThanEQ + to_string(n) + strSpace + strNo + strComma1 + strSpace + strNoEntry + strComma1 + strSpace + strNoDcr;
    
    // Store in an Array
    string A[] = {strConcatPlus, strPlusEnd, strConcatMinus, strMinusEnd, strConcatPlusEQ, strPlusEndEQ, strConcatMinusEQ, strMinusEndEQ};
    //                 0             1             2              3              4               5             6                  7         
    return A[ret];
}

void forLoopPostIncInfo(int seti, int n, int inc, int opType) {  
    // Handle Infinite loop
    /********************************************
     *      Pseudo Code --
            **if seti < n // infinite loop

            for(i=0; i<=10; i--); 
            if optype = lte && inc = -ve
            //if seti > n // Condition false
            **if seti = n // infinite loop
            **if seti < n // infinite
            Throw infinite loop not recommended

            for(i=10; i>0; i++);
            if optype = gt && inc = +ve
            **if seti > n // infinite
            if seti = n // Condition false
            if seti < n // Condition false

            for(i=10; i>=0; i++);
            if optype = gte && inc = +ve
            **if seti > n // infinite
            **if seti = n // infinite
            is seti < n // condition false
            Throw infinite loop not recommended
    *************************************************/
    
    cout << "Pass arguments: forLoopPostIncInfo(int seti, int n, int inc, int opType)" << endl;
    cout << ">> seti is i" << endl;
    cout << ">> n is num" << endl;
    cout << ">> inc is increment, or pass -ve num if you wish to decrement" << endl;
    cout << ">> example, pass -1 for i--, pass -2 for i=i-2, -3 for i=i-3, etc" << endl;
    cout << ">> opType is operator type, pass the following" << endl;
    cout << ">> 0 - for <, 1 for >, 2 for <= and 3 for >= " << endl;
    cout << "*************************************" << endl;
    cout << "You have entered the following values:" << endl;
    cout << ">> i = " << seti << endl;
    cout << ">> n = " << n << endl;
    cout << ">> inc = " << inc << endl;
    cout << ">> opType = " << opType << endl;

    if(opType == 0 && inc<=-1){
        //bool incIsMinusOne = false;
        if(inc==-1){
            cout << "for(i=" << seti << "; " << "i<" << n << "; " << "i--" << ")" << endl;
        } else {
            cout << "for(i=" << seti << "; " << "i<" << n << "; " << "i=i" << inc << ")" << endl;
        }
    
        if(seti>n){
            cout << "Condition will not be checked" << endl;
            return;
        }
        if(seti==n){
            cout << "Condition will not be checked" << endl;
            return;
        }
        if(seti<n){
            cout << "This will be an infinite loop" << endl;
            return;
        }
    }

    if(opType == 2 && inc<=-1){
        //bool incIsMinusOne = false;
        if(inc==-1){
            cout << "for(i=" << seti << "; " << "i=<" << n << "; " << "i--" << ")" << endl;
        } else {
            cout << "for(i=" << seti << "; " << "i=<" << n << "; " << "i=i" << inc << ")" << endl;
        }
    
        if(seti>n){
            cout << "Condition will not be checked" << endl;
            return;
        }
        if(seti==n){
            cout << "This will be an infinite loop" << endl;
            return;
        }
        if(seti<n){
            cout << "Condition will not be checked" << endl;
            return;
        }
    }

    if(opType == 1 && inc>=1){
        //bool incIsMinusOne = false;
        if(inc==1){
            cout << "for(i=" << seti << "; " << "i>" << n << "; " << "i++" << ")" << endl;
        } else {
            cout << "for(i=" << seti << "; " << "i>" << n << "; " << "i=i+" << inc << ")" << endl;
        }
    
        if(seti>n){
            cout << "This will be an infinite loop" << endl;
            return;
        }
        if(seti==n){
            cout << "Condition will not be checked" << endl;
            return;
        }
        if(seti<n){
            cout << "Condition will not be checked" << endl;
            return;
        }
    }

    if(opType == 3 && inc>=1){
        //bool incIsMinusOne = false;
        if(inc==1){
            cout << "for(i=" << seti << "; " << "i>=" << n << "; " << "i++" << ")" << endl;
        } else {
            cout << "for(i=" << seti << "; " << "i>=" << n << "; " << "i=i+" << inc << ")" << endl;
        }
    
        if(seti>n){
            cout << "This will be an infinite loop" << endl;
            return;
        }
        if(seti==n){
            cout << "This will be an infinite loop" << endl;
            return;
        }
        if(seti<n){
            cout << "Condition will not be checked" << endl;
            return;
        }
    }

    // There must be a way to check the
    // correct variables before passing into the loop
    int i = seti;
    int k = seti;
    int p = seti;
    int q = seti;

    if (opType==0){
        cout << "Operator type is set to '<'" << endl;
        cout << "*************************************" << endl;
        if(inc==1){
            cout << "for(i=" << seti << "; " << "i<" << n << "; " << "i++" << ")" << endl;
        } else {
            cout << "for(i=" << seti << "; " << "i<" << n << "; " << "i=i+" << inc << ")" << endl;
        }
        cout << "*************************************" << endl;
        for(;i<n;i=i+inc) {
            if (i<n){
            cout << "i = " + to_string(i) << endl;
            string getStrConcatPlus = showMsgPostPlus(i,n,0);
            cout << getStrConcatPlus << endl;
                if(i==n-inc){
                    cout << "i = " + to_string(n) << endl;
                    string getStrPlusEnd = showMsgPostPlus(i,n,1);
                    cout << getStrPlusEnd << endl;
                    
                }
            }
        }// first for loop
    }
    
    if(opType==1){
        cout << "Operator type is set to '>'" << endl;
        cout << "*************************************" << endl;
        if(inc==-1){
            cout << "for(i=" << seti << "; " << "i>=" << n << "; " << "i--" << ")" << endl;
        } else {
            cout << "for(i=" << seti << "; " << "i>=" << n << "; " << "i=i" << inc << ")" << endl;
        }
        cout << "*************************************" << endl;
        for(;k>n;k=k+inc) {
            if (k>n){
            cout << "i = " + to_string(k) << endl;
            string getStrConcatMinus = showMsgPostPlus(k,n,2);
            cout << getStrConcatMinus << endl;
                // Modified
                if(k<=n-inc){
                    cout << "i = " + to_string(inc+k) << endl;
                    string getStrMinusEnd = showMsgPostPlus(inc+k,n,3);
                    cout << getStrMinusEnd << endl;
                    
                }
            }
        }// 2nd for loop
    }
    
    //*
    if(opType==2){
        cout << "Operator type is set to '<='" << endl;
        cout << "*************************************" << endl;
        if(inc==1){
            cout << "for(i=" << seti << "; " << "i<=" << n << "; " << "i++" << ")" << endl;
        } else {
            cout << "for(i=" << seti << "; " << "i<=" << n << "; " << "i=i+" << inc << ")" << endl;
        }
        cout << "*************************************" << endl;
        for(;p<=n;p=p+inc) {
            if (p<=n){
            cout << "i = " + to_string(p) << endl;
            string getStrConcatPlusEQ = showMsgPostPlus(p,n,4);
            cout << getStrConcatPlusEQ << endl;
                if(p>=n){ //if(p==n-inc){
                    cout << "i = " + to_string(inc+p) << endl;
                    string getStrPlusEndEQ = showMsgPostPlus(inc+p,n,5);
                    cout << getStrPlusEndEQ << endl;
                    
                    
                }
            }
        }// first for loop
    }

    if(opType==3){
        cout << "Operator type is set to '>='" << endl;
        cout << "*************************************" << endl;
        if(inc==-1){
            cout << "for(i=" << seti << "; " << "i>=" << n << "; " << "i--" << ")" << endl;
        } else {
            cout << "for(i=" << seti << "; " << "i>=" << n << "; " << "i=i" << inc << ")" << endl;
        }
        cout << "*************************************" << endl;
        for(;q>=n;q=q+inc) {
            if (q>=n){
            cout << "i = " + to_string(q) << endl;
            string getStrConcatMinusEQ = showMsgPostPlus(q,n,6);
            cout << getStrConcatMinusEQ << endl;
                if(q<=n){ //if(q==n-inc){
                    //int pass;
                    //pass = q-1;
                    //cout << q << " " << inc << endl;
                    cout << "i = " + to_string(q+inc) << endl; 
                    //inc-q = -1-0 = -1, whereas q-inc = 0-(-1) = 1
                    string getStrMinusEndEQ = showMsgPostPlus(q+inc,n,7);
                    cout << getStrMinusEndEQ << endl;
                    
                }
            }
        }// first for loop
    }
    //*/

    
    

}//Function ends here

int main() {
    //string str;
    //str = "Hi how are you"; //for(i=100,i>10,i--)
    int i = 10;
    int n = 0;
    int inc = -1;
    int opt = 3;
    //int inc = 1;
    forLoopPostIncInfo(i, n, inc, opt);
    // return 0;
}