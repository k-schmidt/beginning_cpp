#include <iostream>
#include <string>

using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret;

    cout << "Enter secret: ";
    getline(cin, secret);

    cout << secret << endl;

    string encrypted_secret;
    for (char c: secret) {
        size_t n_pos = alphabet.find(c);
        if (n_pos != string::npos) {
            char new_char {key.at(n_pos)};
            encrypted_secret += new_char;
        } else {
            encrypted_secret += c;
        }
    }

    string decrypted_secret;
    for (char c: encrypted_secret) {
        size_t n_pos = key.find(c);
        if (n_pos != string::npos) {
            char new_char {alphabet.at(n_pos)};
            decrypted_secret += new_char;
        } else {
        decrypted_secret += c;
        }
    }

    cout << encrypted_secret << endl;
    cout << decrypted_secret << endl;

    cout << endl;
    return 0;
}