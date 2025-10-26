#include "to_int.h"

// Function to convert string to integer

size_t to_int(const std::string &Enter_String_Has_A_Number) {
    int result = 0;
    for (char c : Enter_String_Has_A_Number) 
    {
        if(isdigit(c)) {
        result = result * 10 + (c - '0');
    }
    }
    return result;
}

// Example usage
/*int main() {
    std::string numberStr = "12345";
    size_t number = to_int(numberStr);
    std::cout << "The integer value is: " << number << std::endl;
    return 0;
}*/