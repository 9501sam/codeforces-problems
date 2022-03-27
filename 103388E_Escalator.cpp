// https://codeforces.com/gym/103388/problem/E
#include <iostream>
#include <queue>
using namespace std;

typedef long long ll;

int main()
{
    ll n, t, d;
    queue<ll> one;
    queue<ll> zero;

    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> t >> d;
        if (d)
            one.push(t);
        else
            zero.push(t);
    }

    ll dir = -1;
    ll oneMax = 0;
    ll zeroMax = 0;
    ll time = 0;
    ll front;
    ll oneFront;
    ll zeroFront;
    while ((one.size() > 0) && (zero.size() > 0)) {
        oneFront = max(one.front(), zeroMax);
        zeroFront = max(zero.front(), oneMax);

        if (dir == -1) {
            if (oneFront < zeroFront) {
                dir = 1;
                oneMax = oneFront + 10;
                one.pop();
            } else {
                dir = 0;
                zeroMax = zeroFront + 10;
                zero.pop();
            }
        } else if (dir == 1 && oneFront < oneMax) {
            oneMax = oneFront + 10;
            one.pop();
        } else if (dir == 0 && zeroFront < zeroMax) {
            zeroMax = zeroFront + 10;
            zero.pop();
        } else {
            dir = -1;
        }
    }

    while (one.size() > 0) {
        front = one.front();
        front = max(zeroMax, front);
        oneMax = front + 10;
        one.pop();
    }

    while (zero.size() > 0) {
        front = zero.front();
        front = max(oneMax, front);
        zeroMax = front + 10;
        zero.pop();
    }

    cout << max(zeroMax, oneMax) << endl;
}

