#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str;
    cin >> str;
 
    int length = str.length();
    int max_length = 1, current_length = 1;
 
    if (length == 0) {
        cout << "0\n";
    } else {
        for (int i = 1; i < length; i++) {
            if (str[i] == str[i - 1]) {
                current_length++;
                if (current_length > max_length) {
                    max_length = current_length;
                }
            } else {
                current_length = 1;
            }
        }
        cout << max_length << endl;
    }
 
    return 0;
}
