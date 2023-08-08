/**
* @author: Jakir Hasan
* Topic: Caesar Cipher
* Date: 01-08-23
*/

#include<bits/stdc++.h>
using namespace std;

string caesar_cipher_decryption(int k, string ciphertext) {
    int n, i;
    string plaintext = "";
    char ch;
    n = ciphertext.size();
    for (i = 0; i < n; i++) {
        ch = (((ciphertext[i] - 'a') - k + 26) % 26) + 'a';
        plaintext += ch;
    }
    return plaintext;
}

int main()
{
    int n, i, k;
    string plaintext, ciphertext;
    ciphertext = "ftqzqjfwuxxqdmbbiuxxoaynuzqoxagpymotuzqxqmdzuzsuafmzpnxaowotmuz";
    n = ciphertext.size();
    for (k = 1; k <= 26; k++) {
        plaintext = caesar_cipher_decryption(k, ciphertext);
        cout<< "Key: " << k << ", " << "Plaintext: " <<  plaintext << "\n\n";
    }
    cout<< "The deciphered text is: " << "\n";
    cout<< "thenextkillerappwillcombinecloudmachinelearningiotandblockchain" << "\n";

    return 0;
}
