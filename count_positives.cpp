// // write a recursive function that gets an array and its
// length and returns number of its positive elements.
// Note: use raw arrays. Do not use <vector> or <array>
// libraries.

#include <iostream>
using namespace std;

int count_positives(int my_array[], int length){
    if (length == 0){ 
        return 0;
    }
    int positive_count = (my_array[length-1] > 0? 1 : 0); //check is last digit of current amount of array elements is positive

    return positive_count + count_positives(my_array, length-1);
}

int main(){
    int n, j;
    cout << "How many elemnts do you want to input? \n";
    cin >> n; 
    cout << "Enter elements 1 at a time: ";
    int my_array[n];

    for (int i = 0; i < n; i++){
        cin >> j;
        my_array[i] = j;
    }
    
    cout << "There are " << count_positives(my_array, n) << " positives in this array!";

    return 0;
}