#include <iostream>
#include <string>

using namespace std;

string Parser(string& source, const char DELIMITER);

int main() {


    return 0;
}

string Parser(string& source, const char DELIMITER) {
    auto position = source.find(DELIMITER);
    auto result = source.substr(0, position);
    source = source.substr(position + 1);

    return result;
}