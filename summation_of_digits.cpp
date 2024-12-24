// Write a recursive functions that gets a
// positive integer number and returns the
// summation of its digits.
// Hint: use successive division by 10. Digits are
// remainders of divisions.

#include <iostream>
using namespace std;

int sum_of_digits(int& n){
    if (n < 0){
        cout << "Non negative input!";
        return 0;
    }
    else if (n > 0 && n < 10){ 
        return n;
    }
    else{
        int last_digit = n % 10;
        n = n / 10; //remove last digit
        return (last_digit + sum_of_digits(n));
    }
    
}

int main(){
    int number;
    cout << "Enter a positive integer: \n";
    cin >> number;
    cout << sum_of_digits(number);

    return 0;
}