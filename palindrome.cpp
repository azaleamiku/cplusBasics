#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void isPalindrome(string str) {
    string rev = str;

    reverse(rev.begin(), rev.end());

    if (str ==  rev) {
        cout << "\"" << str
        << "\" is palindrome." << endl;
    } else {
        cout << "\"" << str
        << "\" is NOT a palindrome." << endl;
    }
}

int main(void) {
    isPalindrome("ABCDCBA");
    isPalindrome("ABCD");

    return 0;
}

