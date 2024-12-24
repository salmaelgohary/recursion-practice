#include <iostream>
#include <cmath>
using namespace std;

int count_digits(int input){
    if (input < 0) return 0;
    else if (input >= 0 && input < 10) return 1;
    else return (1 + count_digits(input/10));
}

bool check_if_palindrome(int input){
    int digits = count_digits(input);
    int first_digit = input / pow(10, digits - 1);
    int last_digit = input % 10;

    if (input >= 0 && input < 10) return true;
    else if (last_digit == first_digit) return (check_if_palindrome((input - first_digit*(pow(10, digits - 1))) / 10));
    else return false;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (check_if_palindrome(n)) cout << "This number is a palindrome!" << endl;
    else cout << "This number is not a palindrome!" << endl;

    return 0;
}

