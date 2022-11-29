#include <iostream>
#include <conio.h>
using namespace std;

int jumlah, asc;
string nama;

main(){
    cout << "Masukan jumlah data mahasiswa : ";
    cin >> jumlah;

    int nim[jumlah];

    for(int i=0; i<jumlah; i++){
        cout<< "\nmasukkan nama mahasiswa yg ke- "<< (i+1) << " : "; 
        cin >> nama;
        cout << "masukkan nim mahasiswa: ";
        cin >> nim[i];
    }

    for(int c=1;c<jumlah;c++)
    {
        for(int d=0;d<jumlah-c;d++)
        {
            if(nim[d] > nim[d+1])
            {
                asc=nim[d];
                nim[d]=nim[d+1];
                nim[d+1]=asc;
            }
        }
    }

    cout << endl << "Hasil Pengurutan nim :";
    for(int i=0;i<jumlah;i++)
    {
        cout << ", " << nim[i];
    }
    cout << endl;
    getch();
    return 0;
}