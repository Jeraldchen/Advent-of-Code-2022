#include <iostream>
#include <string>
using namespace std;

int main() {
    freopen("Day2_Input.txt", "r", stdin);
    // A is rock, B is paper, C is scissors
    // X is rock, Y is paper, Z is scissors
    // A beats Z, B beats A, C beats B
    string input;
    int total = 0;
    while (getline(cin, input)) {
        if (input == "A X") { //rock rock
            total += (3 + 1);
        } else if (input == "A Y") { //rock paper
            total += (6 + 2); 
        } else if (input == "A Z") { // rock scissors
            total += (0 + 3);
        } else if (input == "B X") { // paper rock
            total += (0 + 1);
        } else if (input == "B Y") { // paper paper
            total += (3 + 2);
        } else if (input == "B Z") { // paper scissors
            total += (6 + 3);
        } else if (input == "C X") { // scissors rock
            total += (6 + 1);
        } else if (input == "C Y") { // scissors paper
            total += (0 + 2);
        } else if (input == "C Z") { // scissors scissors
            total += (3 + 3);
        }
    }
    cout << total << endl;
}