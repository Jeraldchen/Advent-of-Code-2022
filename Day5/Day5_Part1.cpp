#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    freopen("Day5_Input.txt", "r", stdin);
    stack<char> s1, s2, s3, s4, s5, s6, s7, s8, s9;
    s1.push('F'); s1.push('T'); s1.push('C'); s1.push('L'); s1.push('R'); s1.push('P'); s1.push('G'); s1.push('Q');
    s2.push('N'); s2.push('Q'); s2.push('H'); s2.push('W'); s2.push('R'); s2.push('F'); s2.push('S'); s2.push('J');
    s3.push('F'); s3.push('B'); s3.push('H'); s3.push('W'); s3.push('P'); s3.push('M'); s3.push('Q');
    s4.push('V'); s4.push('S'); s4.push('T'); s4.push('D'); s4.push('F');
    s5.push('Q'); s5.push('L'); s5.push('D'); s5.push('W'); s5.push('V'); s5.push('F'); s5.push('Z');
    s6.push('Z');s6.push('C');s6.push('L');s6.push('S');
    s7.push('Z'); s7.push('B'); s7.push('M'); s7.push('V'); s7.push('D'); s7.push('F');
    s8.push('T');s8.push('J');s8.push('B');
    s9.push('Q'); s9.push('N'); s9.push('B'); s9.push('G'); s9.push('L'); s9.push('S'); s9.push('P'); s9.push('H');

    unordered_map<int, stack<char>> map;
    map[1] = s1; map[2] = s2; map[3] = s3; map[4] = s4; map[5] = s5; map[6] = s6; map[7] = s7; map[8] = s8; map[9] = s9;
    int input1, input2, input3;
    string dummy1, dummy2, dummy3;
    while (cin >> dummy1 >> input1 >> dummy2 >> input2 >> dummy3 >> input3) {
        while (input1--) {
            char tmp = map[input2].top();
            map[input2].pop();
            map[input3].push(tmp);
        }
    }
    char top1, top2, top3, top4, top5, top6, top7, top8, top9;
    top1 = map[1].top(); top2 = map[2].top(); top3 = map[3].top(); top4 = map[4].top(); top5 = map[5].top(); top6 = map[6].top(); top7 = map[7].top(); top8 = map[8].top(); top9 = map[9].top();
    cout << top1 << top2 << top3 << top4 << top5 << top6 << top7 << top8 << top9 << endl;
}