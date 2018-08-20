/*
 Write a function, myfibseries, that also takes a single parameter, n, and prints out
the entire sequence of Fibonacci numbers up to and including n, with a comma
between each (do NOT use loops).
*/

#include <iostream>
using namespace std;

int myfib(const int n);
void myfibseries(int n);


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
    cout << "Sequence of " << n << " is ";
    myfibseries(n);
    cout << '.'; //ending period.
    
}//end int main

int myfib(const int n){
    //n=1 and n=2 are base cases within myfib recursion
    //the nth number is (n-1)+(n-2)
    //Ex. 4th number is (3-1)(3-2)=(2)(1)=2 and 0 = 2 
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return myfib(n-1)+myfib(n-2);
    
}//end of myfib

void myfibseries(int n){
    
    //n=1 serves as the base case, starting execution back through before the return 
    //STACK goes from 1 to n in execution once base case reached, since recursion is before 
    //general cout below it 
    if(n==1){ 
        cout << myfib(n); //base case, and with the return will move
                          //back through stack parameters set. Prints 0. 
        return; //return back to int main, moving back through stack first. 
    }
    //general recursion. 
    myfibseries(n-1); //moves from n to 1. 
    cout << ',' << myfib(n); //prints numbers 2 to n.
    


}//end function






/////////////////////////////////////////////////////////////////////////////////////
