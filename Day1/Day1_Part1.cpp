#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {

    freopen("Day1_Input.txt", "r", stdin);
    long total = 0;
    long maximum = 0;
    string input;
    while (getline(cin, input)) {
        if (input.length() != 0) {
            total += stoi(input);
        } else {
            if (total > maximum) {
                maximum = total;
            }
            total = 0;
        }
    }
    cout << maximum << endl;
}