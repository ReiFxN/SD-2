#include <iostream>
#include <string>

using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

// TODO : Menambahkan karakter ke stack
void push(char value) {
    if (top < MAX - 1) {
        top++;
        stack[top] = value;
    }
}


// TODO : Mengambil karakter paling atas
char pop() {
    if (top >= 0) {
        char value = stack[top];
        top--;
        return value;
    }
}    

int main() {

    string kata;

    cout << "Masukkan sebuah kata: ";
    cin >> kata;

    // TODO : Memasukkan setiap karakter ke stack
    for (int i = 0; i < kata.length(); i++) {
        push(kata[i]);
    }

    // TODO Mengeluarkan karakter dari stack
    cout << "Kata setelah dibalik: ";

    while (top >= 0) {
        cout << pop();
    }
    
    cout << endl;

    return 0;
}









// buatlah program yang menerima input sebuah kata dari pengguna. lalu memakai stack untuk mengeluarkan kata kata tersebut. cth: Alya jadi Ayla