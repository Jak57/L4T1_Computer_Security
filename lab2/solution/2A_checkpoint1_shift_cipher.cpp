/**
* Shift Cipher
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string cipher = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";
    int n, i, j, k, idx;
    char ch;
    n = cipher.size();
    for (k = 1; k < 26; k++) {
        printf("K: %d\n", k);
        for (i = 0; i < n; i++) {
            idx = ((cipher[i] - 'a') - k + 26) % 26;
            ch = 'a' + idx;
            cout<< ch;
        }
        cout<< "\n\n";
    }

    return 0;
}

/*
K: 10
ethereumisthebestsmartcontractplatformoutthere
*/
