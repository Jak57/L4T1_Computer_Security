/**
* Encrypting Message using RSA Encryption
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll big_mod(ll a, ll b, ll n)
{
    if (b == 0)
        return 1;
    else if (b%2 == 0) {
        ll p1 = big_mod(a, b/2, n) % n;
        return (p1 * p1) % n;
    } else {
        ll p1 = big_mod(a, b-1, n) % n;
        ll p2 = a%n;
        return (p1 * p2) % n;
    }
}

int main()
{
    int i, j, m;
    ll M, d = 12345, n = 670726081, ans, e = 33519389;
    vector<ll> C;
    string message = "thegranddesignbreaksthenewsbittertosomethattocreateauniversefromabsolutenothinggodisnotnecessaryallthatisneededarethelawsofnaturethatistherecanhavebeenabigbangcreationwithoutthehelpofgodprovidedthelawsofnaturepredatetheuniverseourconceptoftimebeginswiththecreationoftheuniversethereforeifthelawsofnaturecreatedtheuniversetheselawsmusthaveexistedpriortotimethatisthelawsofnaturewouldbeoutsideoftimewhatwehavethenistotallynonphysicallawsoutsideoftimecreatingauniversenowthatdescriptionmightsoundsomewhatfamiliarverymuchlikethebiblicalconceptofgodnotphysicaloutsideoftimeabletocreateuniverse";
    m = message.size();
    for (i = 0; i < m; i++) {
        M = ll(message[i] - 'a' + 1);
        ans = big_mod(M, e, n);
        C.push_back(ans);
    }
    vector<ll> D;
    char ch;
    for (i = 0; i < C.size(); i++) {
        ans = big_mod(C[i], d, n);
        D.push_back(ans);
    }
    cout<< "Decrypted text:" << "\n";
    for (i = 0; i < D.size(); i++) {
        ch = 'a' + int(D[i]-1);
        cout<< ch;
    }
    cout<< "\n";

    return 0;
}

/*
Decrypted text:
thegranddesignbreaksthenewsbittertosomethattocreateauniversefromabsolutenothinggodisnotnecessaryallthatisneededarethelawsofnaturethatistherecanhavebeenabigbangcreationwithoutthehelpofgodprovidedthelawsofnaturepredatetheuniverseourconceptoftimebeginswiththecreationoftheuniversethereforeifthelawsofnaturecreatedtheuniversetheselawsmusthaveexistedpriortotimethatisthelawsofnaturewouldbeoutsideoftimewhatwehavethenistotallynonphysicallawsoutsideoftimecreatingauniversenowthatdescriptionmightsoundsomewhatfamiliarverymuchlikethebiblicalconceptofgodnotphysicaloutsideoftimeabletocreateuniverse
*/
