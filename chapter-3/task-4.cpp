#include <iostream>

using namespace std;

int main()
{

    float operand_1, operand_2(0);
    char operation(0);

    while (1)
    {
        std::cout << "Input format (<first operand> <operation> <second operand>): " 
            << endl;
        std::cin >> operand_1 >> operation >> operand_2;

        switch (operation)
        {
        case '+':
            std::cout << "Result: " << operand_1 + operand_2 << endl;
            break;
        case '-':
            std::cout << "Result: " << operand_1 - operand_2 << endl;
            break;
        case '*':
            std::cout << "Result: " << operand_1 * operand_2 << endl;
            break;
        case '/':
            std::cout << "Result: " << operand_1 / operand_2 << endl;
            break;
        default:
            std::cout << "Wrong input!" << endl;
            break;
        }

        std::cout << "Continue? (y/n)";

        char answer;

        while (1) {

            cin >> answer;

            switch (answer)
            {
            case 'n':
                return 0;
            case 'y':
                break;
            default:
                std::cout << "eh?" << endl;
                break;
            }

            if (answer == 'y') break;
        }
    }
    return 0;
}