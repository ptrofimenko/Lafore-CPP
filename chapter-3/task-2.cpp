#include <iostream>

using namespace std;

int main() {
    
    float temperature = 0;

    while(1) {
    
        cout << "Celsium to Farenheit - enter \'1\' \n"  << 
        "Farenheit to Celsium - enter \'2\' \n" << 
        "\'q\' to exit" << endl;

        switch (char c(getchar()); c)
        {
        case '1':
        {
            
            cout << "Enter temperature in Celsium: " << endl;
            cin >> temperature;
            cout << "Temperature in Farenheit: "
                 << (temperature * 1.8 + 32) << endl;
            
            break;
        }
        case '2':
            
            cout << "Enter temperature in Farenheit: " << endl;
            cin >> temperature;
            cout << "Temperature in Celsium: "
                 << ((temperature - 32) / 1.8) << endl;
            
            break;
        case 'q':
            return 0;
        default:
            cout << "Wrong input!" << endl;
        }
        getchar(); /* read \n */
    }

    return 0;
}