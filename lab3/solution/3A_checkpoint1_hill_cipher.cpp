/**
* Hill Cipher
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<char> cipher;

void matrix_multiplication(int key[][4], int arr[]) {
    int i, j, k, sum;
    char ch;

    // C = K * x
    for (i = 0; i < 4; i++) {
        sum = 0;
        for (j = 0; j < 4; j++) {
            sum += (key[i][j] * arr[j]);
        }
        ch = 'A' + (sum%26);
        cipher.push_back(ch);
    }
    return;
}

int main()
{
    string plain_text = "EVERYLOCKHASAKEY";
    int key_matrix[4][4] = { {6, 24, 1, 5}, {13, 16, 10, 3}, {20, 17, 15, 2}, {7, 13, 2, 9} };
    int sum, m = 4, n, i, j, k;
    int idx[1000], n_init;
    char ch;

    n_init = plain_text.size();
    while ((plain_text.size() % m) != 0)
        plain_text += 'A';

    n = plain_text.size();
    for (i = 0; i < n; i++) {
        idx[i] = plain_text[i] - 'A';
    }
    for (i = 0; i < n; i += m) {
        int tmp[m];
        for (j = 0; j < m; j++)
            tmp[j] = idx[i+j];
        matrix_multiplication(key_matrix, tmp);
    }

    cout<< "Ciphertext:" << "\n";
    for (i = 0; i < n_init; i++)
        cout<< cipher[i];
    cout<< "\n";
    return 0;
}

/*
Ciphertext:
TLLUQKXTGKRLAMSQ
*/

