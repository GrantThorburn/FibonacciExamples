/*
Write a function, myfibsum, that takes a single parameter, n, and prints out the
sum of all the Fibonacci numbers up to and including n (do NOT use loops).
*/

#include <iostream>
using namespace std;

int myfib(const int n);
int myfibsum(int n);


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
    cout << "Sum of the Sequence of " << n << " is " << myfibsum(n) << endl;
    
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

//needs to be an int, as it is returning the sum, and integer, back to the main. A calculating function.

int myfibsum(int n){
    int sum; //protected sum value to return at the end, protected by myfibsum(n-1) recursion. 

    //Base case for myfibsum(n-1) to reach
    if(n==1){
        return 0;
    }
	if(n==2){
	    return 1;
	}
	//a will become return value of stack for each localized level, executing from base 1 back to n
	//incrementing from integer to integer back down the stack
	int a = myfib(n);
	sum = a + myfibsum(n - 1); //values are returned to the previous local myfibsum calls and added together. 
	return sum; //return sum 
}


