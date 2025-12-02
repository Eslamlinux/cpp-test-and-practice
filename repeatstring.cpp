#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

string decodeString(const string& s) {
    stack<int> countStack;
    stack<string> resultStack;
    string currentString = ""; 
    int k = 0;                  

    for (char c : s) {
        if (isdigit(c)) 
        {
            k = k * 10 + (c - '0');
        } 
        else if (c == '[') 
        {
            countStack.push(k);
            resultStack.push(currentString);
            currentString = "";
            k = 0;
        } 
        else if (c == ']') 
        {
            int repeatCount = countStack.top();
            countStack.pop();
            string repeatedString = "";
            for (int i = 0; i < repeatCount; ++i) 
            {
                repeatedString += currentString;
            }
            string prevString = resultStack.top();
            resultStack.pop();
            currentString = prevString + repeatedString;

        } 
        else 
        {
            currentString += c;
        }
    }

    return currentString;
}

// دالة wrapper لتلبية متطلبات التحدي (استقبال string وإرجاع string)
std::string remove_duplicate(std::string arr) {
    return decodeString(arr);
}

// مثال للاستخدام والاختبار
int main() {
    cout << "Input 1: 4a" << endl;
    cout << "Output 1: " << remove_duplicate("4a") << endl; // Output: aaaa

    cout << "\nInput 2: 3[a2[c]]" << endl;
    cout << "Output 2: " << remove_duplicate("3[a2[c]]") << endl; // Output: accaccacc

    cout << "\nInput 3: 2[ab]3[c]" << endl;
    cout << "Output 3: " << remove_duplicate("2[ab]3[c]") << endl; // Output: ababccc
    
    return 0;
}