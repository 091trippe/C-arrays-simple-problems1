#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int num = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << num++;
        }
        cout << endl;
    }

    return 0;
}

