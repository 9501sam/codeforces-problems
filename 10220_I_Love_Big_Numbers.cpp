// https://onlinejudge.org/external/102/10220.pdf
// https://knightzone.studio/2015/05/11/2759/uva%EF%BC%9A10220%EF%BC%8Di-love-big-numbers/
#include <iostream>
using namespace std;

int main()
{
    int mem[1000] = {1, 1};
    int num[3000] = {1};
    int digit = 1;

    for (int i = 2; i <= 1000; i++) {
        for (int j = 0; j < digit; j++)
            num[j] *= i;
        for (int j = 0; j < digit; j++) {
            num[j+1] += num[j] / 10;
            if (j+1 >= digit && num[j+1] > 0)
                digit++;
            num[j] = num[j] % 10;
            mem[i] += num[j];
        }
    }

    int n;
    while (cin >> n)
        cout << mem[n] << endl;
}

