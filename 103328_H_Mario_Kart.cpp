// https://codeforces.com/gym/103328/problem/H
#include <iostream>
using namespace std;

int main()
{
    int N, M, K, result;
    cin >> N >> M >> K;
    int a[N];
    for (int i = 0; i < N; i++)
        cin >> a[i];

    if (K == 1) {
       cout << 0 << endl; 
       return 0;
    }

    result = 1;
    for (int i = 0; i < N; i++)
        result *= a[i];
    cout << result-1 << endl;

    return 0;
}
