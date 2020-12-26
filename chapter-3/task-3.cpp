#include <iostream>  

using namespace std;

int main() {
    
    long num (0);
    char char_num (0);

    cout << "Input number: ";
    
    while(char_num = getchar()) {
        if(char_num != ' ' && char_num != '\n') {
            num *= 10;
            num += char_num - '0';
        } else {
            break;
        }
    }

    cout << "Output number: " << num << endl;

    return 0;
}