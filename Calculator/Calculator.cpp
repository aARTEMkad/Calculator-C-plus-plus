
#include <iostream>

int main()
{
    int menu;
    
    double  suma = 0; //reply
    
    double number_one = 0, number_two = 0, number_three = 0;
    
    char symvol,symvol_1;
    int Continue = 1;
   
    while (Continue == 1) {


        std::cout << "Write the number of numbers for the calculator:";
        std::cin >> menu; //selects how many numbers will be in the expression

        switch (menu)
        {
        case 2:
            std::cout << "Write expression through a space:";
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
            /*else if (symbol == '^')
            ----------------------------------------------------
            
                U can add pow system for your Calculator
                it `ll be more better, trust me!)
                
            ----------------------------------------------------
            else
                std::cout << "Oh, pls, try again!("*/
            std::cout << "Reply = " << suma;
            break;
        case 3:
            std::cout << "Write expression through a space:";
            std::cin >> number_one;

            std::cin >> symvol;

            std::cin >> number_two;

            std::cin >> symvol_1;

            std::cin >> number_three;

            if ((int)symvol_1 == 42 || (int)symvol_1 == 47) {  //checks whether the second character is * or /
                if (symvol_1 == '*') {
                    suma = number_two * number_three;

                }
                else if (symvol_1 == '/') {
                    suma = number_two * number_three;
                }
                if (symvol == '+') {
                    suma += number_one;

                }
                else if (symvol == '-') {
                    suma -= number_one;

                }
                else if (symvol == '*') {
                    suma *= number_one;

                }
                else if (symvol == '/') {
                    suma /= number_one;

                }
            }




            else {
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

                if (symvol_1 == '+') {
                    suma += number_three;

                }
                else if (symvol_1 == '-') {
                    suma -= number_three;

                }
            }

            std::cout << "Reply = " << suma;
            break;
        default:
            std::cout << "Soon....";
            break;
        }
        std::cout << "\nWrite 1-Continue , 2-Break\n";
        std::cin >> Continue;


    }


}
