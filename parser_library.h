#ifndef PARSER_DEMO_PARSER_LIBRARY_H
#define PARSER_DEMO_PARSER_LIBRARY_H

#include <string>
#include <map>

using namespace std;

string Parser(string& source, const char DELIMITER) {
    auto position = source.find(DELIMITER);
    auto result = source.substr(0, position);
    source = source.substr(position + 1);

    return result;
}

string ToString(map<string, string> object, const char DELIMITER) {
    return object["name"] + DELIMITER + object["date_of_birth"] + DELIMITER + object["phone"];
}

#endif //PARSER_DEMO_PARSER_LIBRARY_H
