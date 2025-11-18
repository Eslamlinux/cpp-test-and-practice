#include <iostream>
#include <string>

bool sp_eng(const std::string& sentence) {
    std::string low = std::tolower(sentence);
    std::cout << low << std::endl;


    return true;
}

int main() {
    std::cout << sp_eng("1234#$%%eNglish ;k9") << std::endl;
    return 0;
}
