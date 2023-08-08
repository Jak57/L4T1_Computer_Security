/**
* Decryption Using Vigenere Cipher
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string cipher = "qulzonuwarzbdaikbnrlqulgbjzufgaxogvllzlmenamlpyxxgltrapobezxcevfxozhihaxkbaafanzlqplkbagbpllpnyrxysmenabpalxarktoraabyhppbmgxgbkbgotqvzmeryxznuaxilubrutyvnuxanvorhmfbupfgohrgaabulembmzlqwklipwbqaabyhppbmgxgbkbcyxanaxqulnkvcxoflhrejhkpliqbmmfzlubtpgpjpmegoxzeltqvvglsaabhubsrylbgoxormhorpyqulexjzhcahmrelvorhmbqaabhubsrylbgoxprsttftnpgotsrlqffaxacybleahqvtxquhmffaabyhppbmgxgbkbjvniqixlhalfqlhcgpfbjotqjlaxilmerubpgvmxysrkbuielzbznsexjzhrgzbarvyqvtxzeltqvuzxhubsrylbavpquhmarzvovwmfbufftompbbgafvfbjotqshffyptoilkvzbveypdbgoxyviefphezbuvbcahctvwkbaielzbznshrgzbarvyqvtxxosxqbjkbnaxrapobezx";
    string key = "xnht";
    int n, m, i, j, n_init, idx;
    char ch;
    vector<char> plain;
    n_init = cipher.size();
    m = key.size();

    while ((cipher.size()%m) != 0)
        cipher += 'a';
    n = cipher.size();
    for (i = 0; i < n; i += m) {
        for (j = 0; j < m; j++) {
            idx = (cipher[i+j] - key[j] + 26) % 26;
            ch = 'a' + idx;
            plain.push_back(ch);
        }
    }

    cout<< "Plaintext:" << "\n";
    for (i = 0; i < n_init; i++)
        cout<< plain[i];
    cout<< "\n";

    return 0;
}
