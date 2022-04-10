//
// Created by Dmitry on 10-Apr-22.
//

#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {

    srand(time(NULL));
    int myArray[7];
    int aiArray[7];

    int size = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Please enter the number: " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> myArray[i];
    }
    sort(myArray, myArray + size);

    cout << "++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "Generating computer array ..." << endl;

    for (int i = 0; i < size; ++i) {
        aiArray[i] = rand() % 10;
    }
    sort(aiArray, aiArray + size);

    cout << "++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "My array: " << endl;

    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }

    cout << endl;

    cout << "Generated array: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << aiArray[i] << " ";
    }

    cout << endl;

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (myArray[i] == aiArray[i]) {
            count++;
        }
    }
    cout << "Coincidences: " << count << endl;

    return 0;
}

