#include <iostream>
#include <vector>
using namespace std;

int main() {
    freopen("Day8_Input.txt", "r", stdin);
    vector<vector<int>> v(99, vector<int>(99));
    vector<vector<bool>> grid(99, vector<bool>(99, false));
    char input;
    for (int i = 0; i < 99; ++i) {
        for (int j = 0; j < 99; ++j) {
            cin >> input;
            v[i][j] = input - '0';
        }
    }
    for (int i = 0; i < 99; ++i) {
        for (int j = 0; j < 99; ++j) {
            if (i == 0 || i == 98) {
                grid[i][j] = true;
            } else {
                grid[i][0] = true;
                grid[i][98] = true;  
                break;
            }
        }
    }
    bool is_visible_row_front; 
    bool is_visible_col_front; 
    bool is_visible_row_back; 
    bool is_visible_col_back; 
    for (int i = 1; i < 98; ++i) {
        for (int j = 1; j < 98; ++j) {
            is_visible_row_front = true;
            is_visible_col_front = true;
            is_visible_row_back = true;
            is_visible_col_back = true;
            for (int a = 0; a < i; ++a) {
                if (v[i][j] <= v[a][j]) {
                    is_visible_row_front = false;
                    break;
                }
            }
            for (int b = 0; b < j; ++b) {
                if (v[i][j] <= v[i][b]) {
                    is_visible_col_front = false;
                    break;
                }
            }
            for (int c = 98; c > i; --c) {
                if (v[i][j] <= v[c][j]) {
                    is_visible_row_back = false;
                    break;
                }
            }
            for (int d = 98; d > j; --d) {
                if (v[i][j] <= v[i][d]) {
                    is_visible_col_back = false;
                    break;
                }
            }
            if (is_visible_row_front || is_visible_col_front || is_visible_row_back || is_visible_col_back) {
                grid[i][j] = true;
            }
        }
    }

    // for (int i = 0; i < 99; ++i) { //check grid layout after calculation
    //     for (int j = 0; j < 99; ++j) {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int count = 0;
    for (int i = 0; i < 99; ++i) {
        for (int j = 0; j < 99; ++j) {
            if (grid[i][j]) {
                ++count;
            }
        }
    }
    cout << count << endl;
}