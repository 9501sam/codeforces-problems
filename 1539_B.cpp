// https://codeforces.com/problemset/problem/1539/B
#include <iostream>
#include <string>
using namespace std;

#define MAX_SIZE (int)(1e6+10)

int main(){
    int n, q, strNum[MAX_SIZE];
    string str;
    cin >> n >> q;
    cin >> str;
    strNum[0] = 0;
    int strSize = str.size();
    for (int i = 1; i <= strSize; i++) {
        strNum[i] = strNum[i-1] + str[i-1] - 'a' + 1;
    }

    int l, r;
    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        cout << strNum[r] - strNum[l-1] << endl;
    }

    return 0;
}

