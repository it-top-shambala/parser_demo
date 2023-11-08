#include <iostream>
#include <string>

#include "parser_library.h"

#include "cli_functions.h"

using namespace std;

int main() {
    string input = InputString("Enter text (<name>|<date of birth>|<phone>): ");

    const char DELIMITER_TOTAL = '|';
    const char DELIMITER_DATE = '.';

    auto name = Parser(input, DELIMITER_TOTAL);
    auto date_of_birth = Parser(input, DELIMITER_TOTAL);
    auto phone = input;

    cout << "name: " << "\t\t" << name << endl;
    cout << "date of birth: " << "\t\t" << date_of_birth << endl;
    cout << "phone: " << "\t\t" << phone << endl;

    return 0;
}

