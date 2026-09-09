#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukin nilai: ";
    cin >> n;

    int* arr = new int[n]; //dynamic array

    cout << "Masukin " << n << " angka :\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Isi Array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}