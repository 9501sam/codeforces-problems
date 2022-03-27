// https://codeforces.com/contest/1560/problem/A
#include <iostream>
using namespace std;

#define SIZE(arr) (sizeof(arr)) / (sizeof(arr[0]))

int main()
{
    int nums[] = 
    {1, 2, 4, 5, 7, 8, 10, 11, 14, 16, 17, 19, 20, 22, 25, 26, 28, 29};

    int size = SIZE(nums);
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << 30 * (k / size) + nums[k % size - 1] << endl;
    }
}
