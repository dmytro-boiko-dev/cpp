#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    srand(time(NULL));

    int row;
    int col;

    cout << "Please enter rows count:" << endl;
    cin >> row;

    cout << "Please enter columns count:" << endl;
    cin >> col;

    int arr[row][col];

    // fill array: random or zeros
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
//            arr[i][j] = rand() % 100;  // random
            arr[i][j] = 0;  // zeros
            if (j == i) {
                arr[i][j] = 1;
            }
        }
    }

    // print array
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
