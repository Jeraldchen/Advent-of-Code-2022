#include <iostream>
#include <string>
using namespace std;

int main() {
    freopen("Day2_Input.txt", "r", stdin);
    // A is rock, B is paper, C is scissors
    // X is rock, Y is paper, Z is scissors
    // A = 1, B = 2, C = 3
    string input;
    int total = 0;
    while (getline(cin, input)) {
        if (input == "A X") { //rock lose
            total += (0 + 3);
        } else if (input == "A Y") { //rock draw
            total += (3 + 1); 
        } else if (input == "A Z") { // rock win
            total += (6 + 2);
        } else if (input == "B X") { // paper lose
            total += (0 + 1);
        } else if (input == "B Y") { // paper draw
            total += (3 + 2);
        } else if (input == "B Z") { // paper win
            total += (6 + 3);
        } else if (input == "C X") { // scissors lose
            total += (0 + 2);
        } else if (input == "C Y") { // scissors draw
            total += (3 + 3);
        } else if (input == "C Z") { // scissors win
            total += (6 + 1);
        }
    }
    cout << total << endl;
}