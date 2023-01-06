#include <iostream>
//using namespace std;

int main () {

    int value;
    std::cout << "Enter the first number of the sequence: ";
    std::cin >> value;
    std::cout << std::endl;
    std::cout << value;

    int frequencyOf1 = 0;

    while (frequencyOf1 < 2) {

        if (value == 1) {
            frequencyOf1++;
            if (value % 2 == 0) {
                value = value / 2;
            }  else {
                value = (3 * value) + 1;
            }
        std::cout << " " << value;
        }

        while (value != 1) {
            if (value % 2 == 0) {
                value = value / 2;
            }  else {
                value = (3 * value) + 1;
            }
        std::cout << " " << value;
        }
    };

    std::cout << " ..." ;
    return 0;

};