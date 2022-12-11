#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    freopen("Day9_Input.txt", "r", stdin);
    string instruction;
    int x = 1;
    int cycle_count = 0;
    unordered_map<int, int> registers; //key is cycle count, value is x
    while (cin >> instruction) {
        cycle_count++;
        if (instruction == "noop") {
            registers[cycle_count] = x; //do nothing just update map
        } else { //if addx
            int input; cin >> input;
            registers[cycle_count] = x; //update map 
            cycle_count++; 
            registers[cycle_count] = x; //update map
            x += input; //update x after cycle is over
        }
    }
    int signal_20 = registers[20] * 20;
    int signal_60 = registers[60] * 60;
    int signal_100 = registers[100] * 100;
    int signal_140 = registers[140] * 140;
    int signal_180 = registers[180] * 180;
    int signal_220 = registers[220] * 220;
    int sum = signal_20 + signal_60 + signal_100 + signal_140 + signal_180 + signal_220;
    cout << sum << endl;
}