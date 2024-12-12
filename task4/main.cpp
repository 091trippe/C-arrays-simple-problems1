#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int num = 0;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << setw(3) << num++;
            }
        } else {
            num += n;
            for (int j = 0; j < n; j++) {
                cout << setw(3) << --num;
            }
            num += n;
        }
        cout << endl;
    }

    return 0;
}

