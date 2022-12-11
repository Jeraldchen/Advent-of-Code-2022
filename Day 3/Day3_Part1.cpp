#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    freopen("Day3_Input.txt", "r", stdin);
    string input;
    unordered_map<char, int> map;
    map['a'] = 1; map['b'] = 2; map['c'] = 3; map['d'] = 4; map['e'] = 5; map['f'] = 6; map['g'] = 7; map['h'] = 8;
    map['i'] = 9; map['j'] = 10; map['k'] = 11; map['l'] = 12; map['m'] = 13; map['n'] = 14; map['o'] = 15; map['p'] = 16;
    map['q'] = 17; map['r'] = 18; map['s'] = 19; map['t'] = 20; map['u'] = 21; map['v'] = 22; map['w'] = 23; map['x'] = 24;
    map['y'] = 25; map['z'] = 26; 

    map['A'] = 27; map['B'] = 28; map['C'] = 29; map['D'] = 30; map['E'] = 31; map['F'] = 32; map['G'] = 33; map['H'] = 34;
    map['I'] = 35; map['J'] = 36; map['K'] = 37; map['L'] = 38; map['M'] = 39; map['N'] = 40; map['O'] = 41; map['P'] = 42;
    map['Q'] = 43; map['R'] = 44; map['S'] = 45; map['T'] = 46; map['U'] = 47; map['V'] = 48; map['W'] = 49; map['X'] = 50;
    map['Y'] = 51; map['Z'] = 52;

    char item;
    int total_priority = 0;
    while(cin >> input) {
        for (int i = 0; i < input.length()/2; ++i) {
            for (int j = (input.length()/2); j < input.length(); ++j) {
                if (input[i] == input[j]) {
                    item = input[i];
                    break;
                }
            }
        }
        total_priority += map[item];
    }
    cout << total_priority << endl;
}