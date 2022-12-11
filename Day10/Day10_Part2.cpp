#include <iostream>
//#include <unordered_map>
using namespace std;

int main() {
    freopen("Day10_Input.txt", "r", stdin);
    char map[6][40];
    char sprite[40];
    for (int i = 0; i < 40; ++i) {
        sprite[i] = '.';
    }
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 40; ++j) {
            map[i][j] = '.';
        }
    }
    string instruction;
    int x = 1;
    sprite[x-1] = '#';
    sprite[x] = '#';
    sprite[x+1] = '#';
    int cycle_count = -1;
    //unordered_map<int, int> registers; //key is cycle count, value is x
    while (cin >> instruction) {
        cycle_count++;
        if (instruction == "noop") {
            //registers[cycle_count] = x; //do nothing just update map
            if (sprite[cycle_count % 40] == '#') {
                map[cycle_count / 40][cycle_count % 40] = '#';
            }
        } else { //if addx
            int input; cin >> input;
            if (sprite[cycle_count % 40] == '#') {
                map[cycle_count / 40][cycle_count % 40] = '#';
            }
            //registers[cycle_count] = x; //update map 
            cycle_count++; 
            if (sprite[cycle_count % 40] == '#') {
                map[cycle_count / 40][cycle_count % 40] = '#';
            } else {
                map[cycle_count / 40][cycle_count % 40] = '.';
            }
            //registers[cycle_count] = x; //update map
            x += input; //update x after cycle is over
            for (int i = 0; i < 40; ++i) {
                sprite[i] = '.';
            }
            sprite[x-1] = '#';
            sprite[x] = '#';
            sprite[x+1] = '#';
        }
    }
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 40; ++j) {
            cout << map[i][j];
        }
        cout << endl;
    }
}