// https://codeforces.com/gym/103427/problem/E
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

#define SIZE 200005

int main()
{
    char t[8] = "edgnb";
    char s[SIZE];
    scanf("%s", s);
    int cnt = 0;
    int j = 0;
    int len = strlen(s);
    for (int i = 0; i < len - 4; i++) {
        int j;
        for (j = 0; j < 5; j++)
            if (s[i + j] != t[j]) break;
        if (j == 5) cnt++;
    }
    cout << cnt << endl;
}
