#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matrix[100][100] = {0};
    int num = 0;
    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) matrix[top][i] = num++;
        top++;
        for (int i = top; i <= bottom; i++) matrix[i][right] = num++;
        right--;
        for (int i = right; i >= left; i--) matrix[bottom][i] = num++;
        bottom--;
        for (int i = bottom; i >= top; i--) matrix[i][left] = num++;
        left++;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}

