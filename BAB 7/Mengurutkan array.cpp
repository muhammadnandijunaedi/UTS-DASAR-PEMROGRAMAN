#include <iostream>
using namespace std;

int main()
{
    int A[7];
    int J, K, C, temp;

    cout << "Masukkan nilai pada elemen array : " << endl;
    for (C=0; C<7; C++)
    {
        //menginput elemen array
        cout <<"A[" << C << "] = ";
        cin >> A[C];
    }
    cout << "\nNilai elemen array sebelum diurutkan : " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C << "] = " << A[C] << endl;
    }
    //pengurutan metode maksimum-minimum
    int Jmaks, U=6;
    for (J=0; J<6; J++)
    {
        Jmaks = 0;
        for (K=1; K<=U; K++)
        {
            if (A[K] > A[Jmaks])
            {
                Jmaks = K;
            }
        }
        // penukaran Nilai Elemen Array
         temp = A[U];
         A[U] = A[Jmaks];
         A [Jmaks] = temp;
         U--;
    }

    cout << "\nNilai Elemen setelah diurutkan : " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C << "] = " << A[C] << endl;
    }
    return 0;
}
