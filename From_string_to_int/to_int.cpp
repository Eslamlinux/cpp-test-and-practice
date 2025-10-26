#include "to_int.h"

// Function to convert string to integer

size_t to_int(const std::string &Enter_String_Has_A_Number) {
    size_t result = 0;
    // Handle strings longer than 19 characters to prevent overflow
    if(Enter_String_Has_A_Number.size() > 19) {
        return result; // Return 0 for empty string
    }
    // Convert each character to digit and build the integer
    for (char c : Enter_String_Has_A_Number) 
    {
        if(isdigit(c)) {
        result = result * 10 + (c - '0');
    }
    }
    return result;
}

// Example usage
// int main() {
//     std::string numberStr = "9999999999999999999";
//     size_t number = to_int(numberStr);
//     std::cout << "The integer value is: " << number << std::endl;
//     return 0;
// }