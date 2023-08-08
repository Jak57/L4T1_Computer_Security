/**
* RSA Encryption: Public key component e generation
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct triplet {
    ll x, y, gcd;
};

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    else
        return (b, a%b);
}

triplet extended_euclid(ll a, ll b)
{
    if (b == 0) {
        triplet ans;
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;
        return ans;
    }
    triplet small_ans = extended_euclid(b, a%b);
    triplet ans;
    ans.gcd = small_ans.gcd;
    ans.x = small_ans.y;
    ans.y = small_ans.x - (a/b) * small_ans.y;
    return ans;
}

void is_prime() {
    ll i, n = 54323;
    bool found = true;
    for (i = 2; i < n; i++) {
        if (n%i == 0) {
            found = false;
            cout<< n << " : " << "Not prime" << "\n";
            break;
        }
    }
    if (found)
        cout<< n << " : " << "Prime" << "\n";
    return;
}

void candidate() {
    ll p, q, n = 670726081;
    for (p = 2; p <= 100000; p++) {
        if (n%p == 0)
            cout<< p << " " << n/p << "\n";
    }
    return;
}

int main()
{
    ll p = 54323, q = 12347, phi_n, d = 12345, prod, e;
    phi_n = (p-1)*(q-1);
    triplet ans = extended_euclid(phi_n, d);
    e = ans.y;
    cout<< "e: " << e << "\n";
    prod = ((d%phi_n) * (e%phi_n))%phi_n;
    cout<< "GCD(de, phi_n) = " << gcd(prod, phi_n) << "\n";

    return 0;
}

/*
e: 33519389
GCD(de, phi_n) = 1
*/
