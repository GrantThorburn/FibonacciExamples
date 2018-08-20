/*
 Write a function, myfibseriesR, that also takes a single parameter, n, and prints out
the entire sequence of Fibonacci numbers up to and including n, with a comma
between each, but in REVERSE order (do NOT use loops).
*/
//Reverse printing of fibonacci sequence
//need a myfib function and myfibseriesR function to accomplish
//no loops, so use recursion to accomplish 

#include <iostream>
using namespace std;

int myfib(const int n);
void myfibseriesR(int n);


int main(){
    int n = 0; //initialize num
    
    //user inputs nth number in sequence to print
    cout << "Enter the number on fibonacci sequence to print: ";
    cin >> n; 
    
    if(n==0){
        cout << "Cannot process 0 as a fibonacci. Error.";
        return 1;
    }
    //print the sequence number at nth position (assuming a regular fibonacci sequence)
    cout << n << "th fibonacci sequence number is " << myfib(n) << endl;
    
    //now call the myfibseriesR function, using the nth position to print up to. 
    //up to and including n
    cout << "Reverse Sequence of " << n << " is ";
    myfibseriesR(n);
    
}//end int main

int myfib(const int n){
    //n=1 and n=2 are base cases within myfib recursion
    //the nth number is (n-1)+(n-2)
    //Ex. 3rd number is (3-1)(3-2)=(2)(1)=2. 
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return myfib(n-1)+myfib(n-2);
    
}//end of myfib

void myfibseriesR(int n){
    //if n is equal to 0, no fibonacci sequence
    //if n is 1, this serves as the base case, returning to int main. 
    //different from other sequences, as it is the last 0 to print. 
    if(n==1){
        cout << myfib(n) << '.'; //need period to finish
        return; //return back to int main
    }
    
    //for n when 2 or greater. n=2 is "1,"
    //calls the myfib function to find the sequence nth number, and outputs the integer
    cout << myfib(n) << ",";
    
    //resets the myfibseriesR to next iteration. 
    myfibseriesR(n-1);
    
}//end myfibseriesR

