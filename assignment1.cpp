#include <iostream>
#include <string>

using namespace std;

int main() {
    string input_str;

    cout << "Please enter a string: ";
    getline(cin, input_str);

    size_t input_str_len {input_str.length()};
    string output_str (input_str_len, ' ');
    size_t i {0};

    do {
        output_str += input_str.at(i);
        output_str = output_str.substr(1, input_str_len + 1);
        cout << output_str;
        for (int j = output_str.length() - 2; j >= 0; j--) {
            cout << output_str.at(j);
        }

        cout << endl;
        i++;
    } while (i < input_str_len);
    return 0;
}