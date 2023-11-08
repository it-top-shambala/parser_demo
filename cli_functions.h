#ifndef PARSER_DEMO_CLI_FUNCTIONS_H
#define PARSER_DEMO_CLI_FUNCTIONS_H

#include <iostream>
#include <string>

using namespace std;

string InputString(const string& message) {
    cout << message;

    string input;
    getline(cin, input);

    return input;
}

#endif //PARSER_DEMO_CLI_FUNCTIONS_H
