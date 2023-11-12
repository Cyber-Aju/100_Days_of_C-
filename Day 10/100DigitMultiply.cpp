#include <iostream>
#include <string>
using namespace std;

string multiply(const string& num1, const string& num2) {
    int m = num1.size();
    int n = num2.size();
    string result(m + n, '0');

    for (int i = m - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = n - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            result[i + j + 1] = (product % 10) + '0';
            carry = product / 10;
        }
        result[i] += carry;
    }

    size_t startPos = result.find_first_not_of('0');
    return startPos != string::npos ? result.substr(startPos) : "0";
}

int main() {
    // Example 100-digit numbers (replace with your actual numbers)
    string num1 = "1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890";
    string num2 = "9876543210987654321098765432109876543210987654321098765432109876543210987654321098765432109876543210";

    string result = multiply(num1, num2);

    cout << "Result of multiplication: " << result << endl;

    return 0;
}
