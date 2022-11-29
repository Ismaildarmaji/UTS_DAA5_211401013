#include <iostream>
using namespace std;

#define max 4 //isi maximal
string data [max];
int top = 0;

//mendeteksi kosong atau tidak
bool isEmpty(){
    if(top == 0 ){
        return true;
    }else {
        return false;
    }
}
//mendeteksi data sudah penuh atau belum
bool isFull(){
    if (top >= max){
        return true;
    }else{
        return false;
    }
}
//menampilkan data 
void display(){
    if (!isEmpty()){
        cout<<"data tersimpan : " <<endl;
        for (int a = 0; a < top; a++){
            cout<< a+1 <<"." << data[a] << endl;
        }
    }else{
        cout<< "tidak ada data! "<< endl;
    }

    if (isFull()){
        cout<< "data penuh"<< endl;
    }
    cout<<endl;
}
//menambah data jika belum penuh
void push(){
    if (!isFull()){
        cout<< "\nmasukkan data : ";
        cin>> data [top];
        top++;
    }
}
//menghapus data yang terakhir
void pop(){
    if (!isEmpty()){
        top--;
    }
}

int main(){
    int pil;
    string isi;

    stack:
    system("cls"); 
    display();
     cout<< "=== Program stack ===\n";
     cout<< "===      Menu     === \n";
     cout<< " 1. tambah\n";
     cout<< " 2. hapus\n";
     cout<< " 3. Exit\n";
     cout<< " pilih menu : ";
     cin>> pil;

    if (pil == 1){
        push();
        goto stack;
    }else if(pil == 2){
        pop();
        goto stack;
    }if (pil == 3){
        cout<<"\n...Program selesai..."<<endl;
    }
    
}