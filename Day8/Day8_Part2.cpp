#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    freopen("Day8_Input.txt", "r", stdin);
    vector<vector<int>> v(99, vector<int>(99));
    char input;
    for (int i = 0; i < 99; ++i) {
        for (int j = 0; j < 99; ++j) {
            cin >> input;
            v[i][j] = input - '0';
        }
    }
    int count1; //down
    int count2; //right
    int count3; //up
    int count4; //left
    int scenic_score;
    priority_queue<int> pq;
    for (int i = 1; i < 98; ++i) {
        for (int j = 1; j < 98; ++j) {
            count1 = 0;
            count2 = 0;
            count3 = 0;
            count4 = 0;
            scenic_score = 0;
            for (int a = i+1; a < 99; ++a) {
                if (v[i][j] > v[a][j]) {
                    ++count1;
                } else {
                    ++count1;
                    break;
                }
            }
            for (int b = j+1; b < 99; ++b) {
                if (v[i][j] > v[i][b]) {
                    ++count2;
                } else {
                    ++count2;
                    break;
                }
            }
            for (int c = i-1; c >= 0; --c) {
                if (v[i][j] > v[c][j]) {
                    ++count3;
                } else {
                    ++count3;
                    break;
                }
            }
            for (int d = j-1; d >= 0; --d) {
                if (v[i][j] > v[i][d]) {
                    ++count4;
                } else {
                    ++count4;
                    break;
                }
            }
            scenic_score = count1 * count2 * count3 * count4;
            pq.push(scenic_score);
        }
    }
    cout << pq.top() << endl;
   
}