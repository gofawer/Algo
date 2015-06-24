#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 25;
int skyMap[N][N];

int main()
{
    freopen("input.txt", "r", stdin);

    int T = 0;
    int n = 0;

    cin >> T;

    for (int t = 0; t < T; ++t) {

        cin >> n;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> skyMap[i][j];
            }
        }
        cout << sizeof(skyMap) << endl;
        memset(skyMap, 0, sizeof(skyMap));
    }

    return 0;
}

