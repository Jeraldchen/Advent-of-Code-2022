#include <iostream>
using namespace std;

int main() {
    freopen("Day4_Input.txt", "r", stdin);
    int num1, num2, num3, num4;
    char dummy1, dummy2, dummy3;
    int total_pairs = 0;
    while(cin >> num1 >> dummy1 >> num2 >> dummy2 >> num3 >> dummy3 >> num4) {
        if (num3 >= num1 && num3 <= num2) {
            total_pairs++;
        } else if (num1 >= num3 &&  num1 <= num4) {
            total_pairs++;
        }
    }
    cout << total_pairs << endl;
}