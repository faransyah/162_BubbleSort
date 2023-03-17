#include <iostream>
using namespace std;


int a[20];                  // Deklarasi array a dengan ukuran 20
int n;                     // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {           // Procedure untuk input
    while (true) {       // looping 
        cout << "Masukkan banyaknya elemen pada : "; // output ke layar
        cin >> n;        // Input dari pengguna 
        if (n <= 20)     // Jika n kurang dari atau sama dengan 20
            break;      // Keluar dari loop 
        else {           // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
        }
    }
    cout << endl;                                  // Output baris kosong
    cout << "====================" << endl;        // Output ke layar
    cout << "Masukkan Elemen Array" << endl;       // Output ke layar
    cout << "====================" << endl;        // Output ke layar

    for (int i = 0; i < n; i++) {  // Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << "}"; // Output ke layar 
        cin >> a[i];                    // Input dari pengguna
    }
}

void display() {
    cout << endl;                               // Output baris kosong
    cout << "==================================" << endl;   // Output ke layar 
    cout << "Element Array yang telah tersusun" << endl;         // Output ke layar
    cout << "==================================" << endl;   // OUtput ke layar 
    for (int j = 0; j < n; j++) {
        cout << a[j] << endl;
    }
    cout << endl;
}

void bubbleSortArray() {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j = 1];
                a[j + 1] = temp;
            }
        }
    }
}



int main() {
    input();
    bubbleSortArray();
    display(); 
    return 0; 
}