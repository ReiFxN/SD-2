#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

// Membuat node baru
Node* buatNode(int data) {
    Node* baru = new Node;

    baru->data = data;
    baru->kiri = NULL;
    baru->kanan = NULL;

    return baru;
}

// TODO : Memasukkan data ke Binary Search Tree
Node* insert(Node* akar, int data) {
    // kalau posisi kosong maka buat node baru
    if(akar == NULL){
        return buatNode(data);
    }

    //kalo data lebih kecil maka masuk ke kiri
    if(data < akar->data){
        akar->kiri = insert(akar->kiri, data);
    }

    //kalo datanya lebih gede maka masuk kekanan
    else if(data > akar->data){
        akar->kanan = insert(akar->kanan, data);
    }
    return akar;
}

// TODO : Pre-order (Root - Kiri - Kanan)
void preOrder(Node* akar) {
    if(akar !=NULL){
        cout << akar->data << " ";
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

// TODO : In-order (Kiri - Root - Kanan)
// TODO : Membuat In-order (kiri - root - kanan)
void inOrder(Node* akar) {
    if(akar !=NULL){
        inOrder(akar->kiri);
        cout << akar->data << " ";// root
        inOrder(akar->kanan);
    }
}

// TODO : Post-order (Kiri - Kanan - Root)
void postOrder(Node* akar) {
    if(akar !=NULL){
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " ";// root
    }
}


int main() {

    Node* akar = NULL;
    int angka;

    cout << "Masukkan angka (0 untuk berhenti):\n";

    while (true) {

        cout << "Input: ";
        cin >> angka;

        // Berhenti jika pengguna memasukkan 0
        if(angka == 0){
            break;
        }
        // Angka dimasukkan ke tree
        akar = insert(akar, angka);
    }

    cout << "\nHasil Traversal:\n";

    cout << "Pre-order  : ";
    preOrder(akar);

    cout << "\nIn-order   : ";
    inOrder(akar);

    cout << "\nPost-order : ";
    postOrder(akar);

    return 0;
}