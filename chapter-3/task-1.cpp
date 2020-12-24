#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    while(1) {

        int value;

        std::cout << "enter a number to see a multiplication table (q to exit)" << endl;

        switch (char c (getchar()); c)
        {
        case 'q':
            return 0;

        default:

            /* get integer from char */
            value = c - '0';
            int multiplicated_value (value);
            
            if(value > 0 && value < 10) {
                for (int i = 0; i < 20; i++) {
                    for (int j = 0; j < 10; j++) {
                        std::cout << setw(5) << multiplicated_value;
                        multiplicated_value += value;   
                    }
                    std::cout << endl;
                }    
            }
        }
        getchar(); /* read \n */

    }
    return 0;
}