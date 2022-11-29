#include<iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

//mendeteksi data sudah penuh atau belum
bool isFull(){
    if(top >= max){
        return true;
    }else {
        return false;
    }
}
//mendeteksi kosong atau tidak
bool isEmpty(){
    if(top == 0){
        return true;
    }else{
        return false;
    }
}
//menampilkan data
void view(){
    if(!isEmpty()){
        cout<< "Data antrian : "<<endl;
        for(int a = top-1; a>=0; a--){
            cout<< a+1 <<"."<<data[a]<<endl;
        }
    }else{
        cout<< "Antrian kosong"<<endl;
    }

    if(isFull()){
        cout<< " Antrian penuh"<<endl;
    }
    cout<< endl;
}
//menambah data jika belum penuh
void push(){
    if(!isFull()){
        cout<< "Masukkan data : ";
        cin>> data[top];
        top++;
    }
}
//menghapus data yang pertama
void pop(){
    if (!isEmpty()){
        for(int a = 0; a < top-1; a++){
            data[a] = data[a+1];
        }
        top--;
    }
}

int main(){
    int pil;
    string isi;

    queue:
    system("cls");
    view();
    cout<< "=== Program queue ===\n";
    cout<< "===      Menu     === \n";
    cout<< " 1. tambah\n";
    cout<< " 2. hapus\n";
    cout<< " 3. Exit\n";
    cout<< " pilih menu : ";
    cin>> pil;

     if (pil == 1){
        push();
        goto queue;
    }else if(pil == 2){
        pop();
        goto queue;
    }if (pil == 3){
        cout<<"\n...Program selesai..."<<endl;
    }

}