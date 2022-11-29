#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

    struct TNode{
    int detaildata;
    TNode *next;
};

    TNode *depan,*belakang;

    void init ()
{
    depan = NULL;
    belakang = NULL;
}

    int isEmpty(){
    if(belakang==NULL)return 1;
else 
    return 0;
}

    void insertDepan(int dataterbaru)
{
    TNode *terbaru;
    terbaru = new TNode;
    terbaru->detaildata = dataterbaru;
    terbaru->next = NULL;
    if(isEmpty()==1)
    {
        depan=belakang=terbaru;
        belakang->next=NULL;
    }
else
    {
        terbaru->next = depan;
        depan=terbaru;
    }
}

    void tampil()
    {
    TNode *bantu;
    bantu=depan;
        if(isEmpty()==0)
        {
            while(bantu!=NULL)
            {
                cout<<bantu->detaildata<<" ";
                bantu=bantu->next;
            }
        }
else 
    cout <<"Masih kosong\n";
}

void menghapus()
{

    TNode *menghapus;
    int d;
    if (isEmpty()==0)
    {
        if(depan!=belakang)
        {
            menghapus=depan;
            d=menghapus->detaildata;
            depan=depan->next;
            delete menghapus;
        }
else
        {
            d=belakang->detaildata;
            depan=belakang=NULL;
        }
    cout<<d<<"dihapus";
}
else 
    cout<<"Data kosong\n";
}

void clear()
{
    TNode *bantu, *menghapus;
    bantu =depan;
    while(bantu!=NULL)
    {
        menghapus=bantu;
        bantu=bantu->next;
        delete menghapus;
    }
    depan = NULL;
    printf("clear");
}

int main()
{
    int pil, dataterbaru;
    do
    {
        system("cls");
        cout<<endl;
        cout<<" PROGRAM LINKED LIST"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"1.Input data"<<endl;
        cout<<"2.Menghapus data terdepan"<<endl;
        cout<<"3.Menampilkan data terbaru"<<endl;
        cout<<"4.Menghapus seluruh data"<<endl;
        cout<<"5.Exit program"<<endl;
        cout<<" Masukkan pilihan anda : ";cin>>pil;
        
        switch (pil)
        {
            case 1: system("cls");
            {
                cout<<"Masukkan data anda = ";cin>>dataterbaru;
                insertDepan(dataterbaru);
                break;
            }
            case 2: system("cls");
            {
                menghapus();
                break;
            }
            case 3: system("cls");
            {
                tampil();
                break;
            }
            case 4: system("cls");
            {
                clear();
                break;
            }
            case 5: system("cls");
            {
                return 0;
                break;
            }
        }
        getch();
    }
    while (pil!=7);
}