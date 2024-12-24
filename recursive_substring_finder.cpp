#include <iostream>
using namespace std;

// Helper function: checks if substr matches target starting at pos_target
bool check_from_position(const string &target, const string &substr, int pos_target, int pos_substr) {
    // Base case: if we have matched the entire substr, return true
    if (pos_substr == substr.length()) {
        return true;
    }
    
    // Base case: if we reach the end of target without matching, return false
    if (pos_target == target.length()) {
        return false;
    }
    
    // TODO If the current characters match, check the next characters, else rutrun f alse
    if (target[pos_target] == substr[pos_substr]){
        return check_from_position(target, substr, pos_target + 1, pos_substr + 1);
    }
    else return false;

}

// Main recursive function: checks if substr is contained within target
bool check_if_contains(const string &target, const string &substr) {
    // Base case: if substr is empty, it's trivially contained
    if (substr.length() == 0) {
        return true;
    }

    // Base case: if target is shorter than substr, it can't contain substr
    if (target.length() < substr.length()) {
        return false;
    }

    // Try to match substr starting from each position in target
    for (int i = 0; i <= target.length() - substr.length(); i++) {
        if (check_from_position(target, substr, i, 0)) {
            return true;
        }
    }
    
    return false; // No match found
}

int main() {
    string target = "Spooky sights are near when Halloween time is here.";
    string substr = "Halloween";
    
    if (check_if_contains(target, substr)) {
        cout <<  substr << " found!" << endl;
    } else {
        cout <<  substr <<" not found!" << endl;
    }
    
    return 0;
}
