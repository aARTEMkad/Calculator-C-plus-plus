
#include <iostream>

int main()
{
    int menu;
    double number_one, number_two, number_three, number_flour, suma = 0;
    char symvol,symvol_1;
    std::cout << "Write the number of numbers for the calculator\n";
    std::cin >> menu;
    switch (menu)
    {
    case 2:
        std::cout << "Write Expression:";
        std::cin >> number_one;

        std::cin >> symvol;

        std::cin >> number_two;
        if (symvol == '+') {
            suma = number_one + number_two;
           
        }
        else if (symvol == '-') {
             suma = number_one - number_two;
           
        }
        else if (symvol == '*') {
             suma = number_one * number_two;
          
        }
        else if (symvol == '/') {
            suma = number_one / number_two;
          
        }
        std::cout << "Reply = " << suma;
        break;
    case 3:
        std::cout << "Write Expression:";
        std::cin >> number_one;

        std::cin >> symvol;

        std::cin >> number_two;

        std::cin >> symvol_1;

        std::cin >> number_three;
        if (symvol > symvol_1) {
            std::cout << "sumvol > symvol_1\n";
            std::cout << int(symvol) << std::endl;
            std::cout << int(symvol_1) << std::endl;
        }
        else std::cout << "symvol>symvol_1\n" << symvol << "\n" << symvol_1;
        if (symvol == '+') {
            suma = number_one + number_two;

        }
        else if (symvol == '-') {
            suma = number_one - number_two;

        }
        else if (symvol == '*') {
            suma = number_one * number_two;

        }
        else if (symvol == '/') {
            suma = number_one / number_two;

        }
        std::cout << "Reply = " << suma;
        break;
    case 4:

        break;
    default:
        break;
    }



















}
