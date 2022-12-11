#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;

int main() {

    freopen("Day1_Input.txt", "r", stdin);
    long total = 0;
    long maximum = 0;
    long total_max = 0;
    long n = 3;
    string input;
    priority_queue<long> pq;
    while (getline(cin, input)) {
        if (input.length() != 0) {
            total += stoi(input);
        } else {
            pq.push(total);
            total = 0;
        }
    }
    while (n--) {
        total_max += pq.top();
        pq.pop();
    }
    cout << total_max << endl;
}