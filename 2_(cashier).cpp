#include<conio.h>
#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

struct databrg
{
   char namabrg[30];
   long hrgsatuan;
   int jmlhbeli;
};

struct abc
{
 int nota,jmlhtrx,bayar;

   databrg * d;
};
 abc t;

long total(int a)
{long th;
th=t.d[a].hrgsatuan*t.d[a].jmlhbeli;
return th;
}


long subtotal()
{long s;
 s=0;
   for(int i=0;i<t.jmlhtrx;i++)
    {s=s+total(i);}

   return s;

}
long diskon()
{long d;
 if (subtotal()>180000)
    {d=subtotal()*0.15;}
   else if (subtotal()>70000)
    {d=subtotal()*0.05;}
   else
    {d=0;}
   return d;
}
 long ppn()
 {long p;
    p=0.1*subtotal();
      return p;
}
 long grand()
   {long g;
    g=subtotal()-diskon()+ppn();
      return g;
}
long kembalian()
   {long k;
    k=t.bayar-grand();
   return k;
}
void tampil(int u)
{
 cout<<setiosflags(ios::left)<<setw(15)<<t.d[u].namabrg;
   cout<<setw(1)<<"Rp. ";
   cout<<setiosflags(ios::right)<<setw(2)<<t.d[u].hrgsatuan;
   cout<<setw(5)<<t.d[u].jmlhbeli<<endl;
}

void menu(){
    cout << "|=====================================|\n";
    cout << "|                MENU                 |\n";
    cout << "|              POS KUPI               |\n";
    cout << "|=====================================|\n";
    cout << "|      Nama       |      Harga        |\n";
    cout << "|=====================================|\n";
    cout << "|      Nasi       |     Rp.3000       |\n";
    cout << "| mie aceh goreng |     Rp.12000      |\n";
    cout << "|  Ifumi goreng   |     Rp.12000      |\n";
    cout << "|  Tempe Goreng   |     Rp.5000       |\n";
    cout << "| kentang goreng  |     Rp.5000       |\n";
    cout << "|  nasi goreng    |     Rp.10000      |\n";
    cout << "|   Teh Manis     |     Rp.3000       |\n";
    cout << "|   Teh Tarik     |     Rp.5000       |\n";
    cout << "|   Aneka jus     |     Rp.9000       |\n";
    cout << "|   Bandrek Susu  |     Rp.6000       |\n";
    cout << "|   Kopi Susu     |     Rp.5000       |\n";
    cout << "|=====================================|\n";
    
}

int main(void)
{
menu();
cout<<"\n=============================================="<<endl;
cout<<"                   POS KUPI                   "<<endl;
cout<<"=============================================="<<endl;
cout<<"No Meja : "; cin>>t.nota;
cout<<endl;
cout<<"Jumlah Pesanan : ";cin>>t.jmlhtrx;
t.d=new databrg[t.jmlhtrx];
for(int i=0;i<t.jmlhtrx;i++)
{
cout<<endl;
cout<<"Pesanan ke-"<<(i+1)<<endl;
cout<<"Nama Makanan/Minuman : "; cin>>t.d[i].namabrg; 
cout<<"Harga Satuan : Rp. ";cin>>t.d[i].hrgsatuan;
cout<<"Jumlah Beli : "; cin>>t.d[i].jmlhbeli;
}


system ("cls");
      cout<<"POS KUPI\n";
      cout<<"Jl. Karya Wisata No.56, Pangkalan Masyhur, Kec. Medan Johor\n";
      cout<<"\n";
    cout<<"======================================"<<endl;
    cout<<"Nama          Harga      Jumlah       "<<endl;
    cout<<"makanan       satuan     Beli         "<<endl;
    cout<<"/minuman"<<endl;
    cout<<"======================================"<<endl;
    for(int i=0;i<t.jmlhtrx;i++)
    {tampil(i);}
     cout<<"======================================"<<endl;
     cout<<"SubTotal    : Rp. "<<subtotal()<<endl;
     cout<<"Diskon      : Rp. "<<diskon()<<endl;
     cout<<"PPN 10%     : Rp. "<<ppn()<<endl;
     cout<<"Grand Total : Rp. "<<grand()<<endl;
     cout<<"Bayar       : Rp. "; cin>>t.bayar;
     cout<<"\n";
     cout<<"Kembalian   : Rp. "<<kembalian()<<endl;
     cout<<"\n";
     cout<<"======= Terimakasih Atas ======= \n";
     cout<<"======== Kunjungan Anda ======== \n";

   getch();

   }