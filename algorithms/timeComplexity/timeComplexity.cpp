// #include<stdio.h>
#include<iostream>
#include<string> // for string class
using namespace std;

void loopinfo(int seti, int n){
    cout << "Information :" << endl;
    cout << "***********************" << endl;
    cout << "for(int i=" << seti << ";i<n;i++)" << endl;
    cout << "***********************" << endl;
    cout << "n is " << n << " and i is set to " << seti << " ." << endl;
    cout << "So condition (i<n) will be checked (n+1)-i times i.e " << (n+1)-seti << " times." << endl;
    cout << "Since condition (i<n) will be checked " << (n+1)-seti << " times." << endl;
    cout << "Therefore, i++ will also be checked " << (n+1)-seti << " times." << endl;
    cout << "And the statements inside the for loop will run {[(n+1)-i]-1} or (n-i) times " << "i.e " << n-seti << " times.\n" << endl;
    cout << "Analysis" << endl;
    cout << "for(i=" << seti << "; XX, XX) -- we have, -- 1 unit(s) of time" << endl;
    int const1 = 1;
    
    int i; 
    int noConst2;
    i = seti;
    noConst2 = (n+1)-i;
    cout << "for(XX;i<n<<XX) -- we have, -- " << noConst2 << " unit(s) of time, i.e (n+1)-i unit(s) of time." << endl;

    int noConst3;
    noConst3 = noConst2;
    cout << "for(XX; XX,i++) -- we have, -- "<< noConst3 << " unit(s) of time, i.e (n+1)-i unit(s) of time." << endl;

    int noConst4;
    noConst4 = n-seti;
    cout << "One statement inside the for loop will take " << noConst4 << " unit(s) of time, i.e (n-i) unit(s) of time." << endl;

    int totalTime = const1 + noConst2 + noConst3 + noConst4;
    cout << "Total Time: " << totalTime << " unit(s) of time\n" << endl;
    cout << "Simplification" << endl;
    cout << "Or say : 1 + 2*((n+1)-i) + (n-i) -- unit(s) of time" << endl;
    cout << "Or say : 1 + 2n + 2 - 2i + n + i -- unit(s) of time" << endl;
    cout << "Or say : 3 + 3n - i -- unit(s) of time" << endl;
    cout << "Or simply : 3n+3-i -- unit(s) of time\n" << endl;
    cout << "Statement Execution: " << (n+1)-seti-1 << " times. Or say (n-i) times."<< endl;
    if(seti==n){
        cout << "No entry to for loop" << endl;
    }
}

void printArray(string str, int seti, int n) {
    loopinfo(seti, n); // Let just ignore this, to understand
    // for loop, we won't consider this statement

    // Now "int i=0;" this statement will execute
    // exactly 
    // 1 time --equation(1)
    for (int i=seti; i<n; i++) {
        // Let say "n" is 10, then how many time
        // the statement "i<n" will execute ?
        // Let's see
        // Is 0<10 ? Yes // Ommit this if "i" starts from 1
        // Is 1<10 ? Yes
        // Is 2<10 ? Yes
        // Is 3<10 ? Yes
        // Is 4<10 ? Yes
        // Is 5<10 ? Yes
        // Is 6<10 ? Yes
        // Is 7<10 ? Yes
        // Is 8<10 ? Yes
        // Is 9<10 ? Yes
        // Is 10<10 ? No

        // So the statement "i<n" will be executed exactly
        // 10 + 1 Time, in this case, when n was 10
        // That means (n+1) time, when "i" was set to zero
        // Final result = (n+1)time for the 2nd statement
        // (n+1) time --equation(2.a) (when i = 0)

        // Now what will happen if "i" starts from 1 ?
        // If "i" starts from 1, then
        // the same statement will run exactly
        // n time
        // Final result = n time for the 2nd statement
        // n time --equation(2.b)

        // Remember "i++" or the increment/decrement operator
        // also run exactly the no. of time condition
        // operator will run

        // So if i<n runs (n+1) times, i++ will run (n+1) times
        // if i<n runs n times, i++ will run n times
        // Final result = (n+1) time if i=0, n time if i = 1
        // (n+1) time if i<n runs (n+1) times --equation(3.a)
        // n time if i<n runs n times --equation(3.b)

        cout << str << endl;
    }
}

int main() {
    string str;
    str = "Hi how are you";
    int n = 10;
    printArray(str, 0, 10);
    // return 0;
}