#ifndef PARSER_DEMO_PARSER_LIBRARY_H
#define PARSER_DEMO_PARSER_LIBRARY_H

#include <string>

using namespace std;

string Parser(string& source, const char DELIMITER) {
    auto position = source.find(DELIMITER);
    auto result = source.substr(0, position);
    source = source.substr(position + 1);

    return result;
}

#endif //PARSER_DEMO_PARSER_LIBRARY_H
