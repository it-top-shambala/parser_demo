#include <iostream>
#include <string>
#include <map>

#include "parser_library.h"

#include "cli_functions.h"

using namespace std;

int main() {
    string input = InputString("Enter text (<name>|<date of birth>|<phone>): ");

    const char DELIMITER_TOTAL = '|';
    const char DELIMITER_DATE = '.';

    map<string, string> data;

    auto name = Parser(input, DELIMITER_TOTAL);
    auto date_of_birth = Parser(input, DELIMITER_TOTAL);
    auto phone = input;

    data.insert(pair<string, string>("name", name));
    data.insert(pair<string, string>("date_of_birth", date_of_birth));
    data.insert(pair<string, string>("phone", phone));

    cout << "name: " << "\t\t" << data["name"] << endl;
    cout << "date of birth: " << "\t\t" << data["date_of_birth"] << endl;
    cout << "phone: " << "\t\t" << data["phone"] << endl;

    cout << ToString(data, ';');

    return 0;
}

