#include <iostream>
using namespace std;

bool is_power_of_two(int n){
    //base case
    if (n == 1) return true;

    if (n <= 0) return false;

    if (n % 2 != 0) return false;

    else return is_power_of_two(n/2);
}

int main(){
    int n;
    cout << "Enter a number to check if it is a power of two: ";
    cin >> n;

    if (is_power_of_two(n)) cout << "This number is a power of two!";
    else cout << "This number is not a power of two!";

    return 0;
}