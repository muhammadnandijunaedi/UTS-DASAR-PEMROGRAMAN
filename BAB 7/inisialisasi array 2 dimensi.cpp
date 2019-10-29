#include <iostream>
using namespace std;

int main()
{
    cout << "Nama : Muhammad Nandi Junaedi " << endl;
    cout << "NIM  : 1900059 " << endl << endl;

    int A [2] [4] = {1,2,3,4,5,6,7,8};

    int I,J;

    cout << "Aplikasi Matriks Ordo 2 x 4" << endl;
    for (I=0; I<2; I++)
    {
        for (J=0; J<4; J++)
        {
            // menampilkan hasil dari indeks I dan J
            cout << "A [" << I << "] [" << J << "] = " << A [I] [J] << endl;
        }
        cout << endl;
    }

    return 0;
}
