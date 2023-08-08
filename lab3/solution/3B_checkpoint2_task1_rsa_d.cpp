#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct triplet {
    ll x, y, gcd;
};

triplet extended_euclid(ll a, ll b) {
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
    ll i, n = 654323;
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
    ll p, q, n = 80780754611;
    for (p = 2; p <= 1000000; p++) {
        if (n%p == 0)
            cout<< p << " " << n/p << "\n";
    }
    return;
}

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main()
{
    ll p = 123457, q = 654323, phi_n, e = 12345713, d, prod;
    phi_n = (p-1)*(q-1);
    triplet ans = extended_euclid(phi_n, e);
    d = ans.y;

    cout<< "Private key, d: " << d << "\n";
    prod = ((d%phi_n)*(e%phi_n))%phi_n;
    cout<< "GCD(de, phi_n) = " << gcd(prod, phi_n) << "\n";

    return 0;
}
