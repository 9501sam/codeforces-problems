// https://codeforces.com/problemset/problem/1579/E1
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, tmp;
        deque<int> dq;
        cin >> n;
        cin >> tmp;
        dq.push_back(tmp);
        for (int i = 1; i < n; i++) {
            cin >> tmp;
            if (tmp < dq.front()) 
                dq.push_front(tmp);
            else
                dq.push_back(tmp);
        }
        for (int i = 0; i < n; i++) {
            cout << dq.front() << " ";
            dq.pop_front();
        }
        cout << endl;
    }
    
    return 0;
}
