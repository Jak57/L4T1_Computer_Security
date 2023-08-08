/**
* Encryption Using Vigenere Cipher
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string plain = "EVERYLOCKHASAKEY";
    int key[4] = {13, 5, 17, 9}, n, m = 4, i, j, n_init, idx;
    vector<char> cipher;
    char ch;
    n_init = plain.size();

    while ((plain.size() % m) != 0)
        plain += 'A';
    n = plain.size();
    for (i = 0; i < n; i += m) {
        for (j = 0; j < m; j++) {
            idx = ((plain[i+j] - 'A') + key[j]) % 26;
            ch = 'A' + idx;
            cipher.push_back(ch);
        }
    }

    cout<< "Ciphertext:" << "\n";
    for (i = 0; i < n_init; i++)
        cout<< cipher[i];
    cout<< "\n";

    return 0;
}

/*
Ciphertext:
RAVALQFLXMRBNPVH
*/
