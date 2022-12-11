#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    freopen("Day6_Input.txt", "r", stdin);
    string input;
    int start_index = 0;
    cin >> input;
    for (int i = 0; i < input.length()-4; ++i) {
        unordered_set<char> set_of_chars;
        for (int j = 0; j < 4; ++j) {
            set_of_chars.insert(input[i + j]);
        }
        if (set_of_chars.size() == 4) {
            start_index = i;
            break;
        }
    }
    cout << start_index + 4 << endl;
}