#include <iostream>
 
using namespace std;
 
int main() {
 
    string c;
    while (cin >> c) {
        int maxF = 0;
        int tempF = 0;
        bool first = true;

        for (char ch : c) {
            if (ch == 'o') {
                tempF++;
            }
            else {
                if (first) {
                    maxF = tempF;
                    first = false;
                }
                else {
                   maxF = max(maxF, (tempF / 2));
                }
                tempF = 0;
            }
        }

        cout << max(maxF, tempF) << endl;
    }
 
    return 0;
}
