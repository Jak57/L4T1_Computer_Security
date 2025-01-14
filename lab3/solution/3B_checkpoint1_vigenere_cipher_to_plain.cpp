/**
* Vigenere Cipher to Plain text
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string c = "qul zonuw arzbda ikbnrl qul gbjz, ufgaxo gv llzl, mena � ml pyxxgl t rapobezx cevf xozhihax kbaafan zlq pl kba gbpllpnyr. xys mena bp alxark tor aab yhpp bm gxgbkb. � [gotq vz,] meryx znu axil ubru t yvn uxan vorhmfbu pfgohrg aab ulem bm zlq, wklipwbq aab yhpp bm gxgbkb cyx-anax qul nkvcxofl. hre jhkpliq bm mfzl ubtpgp jpme gox zeltqvvg ls aab hubsrylb. goxormhor py qul exjz hc ahmrel vorhmbq aab hubsrylb, goxpr sttf tnpg otsr lqffaxa cyble ah qvtx; quhm ff aab yhpp bm gxgbkb jvniq ix lhalfql hc gpfb. jotq jl axil meru bp gvmxysr kbu-ielzbzns exjz, hrgzbar vy qvtx, zeltqvuz x hubsrylb. avp quhm arzvovwmfbu fftom pbbga fvfbjotq shffypto. ilkv zbve ypdb gox yviefphe zbuvbca hc tvw: kba ielzbzns, hrgzbar vy qvtx, xosx qb jkbnax  rapobezx";
    int n, i, j, m = 4, cnt, idx, k;
    n = c.size();

    for (i = 0; i < n;) {
        // cout<< "|";
        cnt = 0;
        while (cnt < 4) {
            if (c[i] >= 'a' && c[i] <= 'z') {
                cnt++;

                if (cnt == 4) {
                    k = 19;
                    idx = ((c[i] - 'a') - k + 26)%26;
                    c[i] = 'A' + idx;
                }

                if (cnt == 3) {
                    k = 7;
                    idx = ((c[i] - 'a') - k + 26)%26;
                    c[i] = 'A' + idx;
                }

                if (cnt == 1) {
                    k = 23;
                    idx = ((c[i] - 'a') - k + 26)%26;
                    c[i] = 'A' + idx;
                }

                if (cnt == 2) {
                    k = 13;
                    idx = ((c[i] - 'a') - k + 26)%26;
                    c[i] = 'A' + idx;
                }
            }

            cout<< c[i];
            i++;
        }
        // cout<< "|";
    }

    return 0;
}
