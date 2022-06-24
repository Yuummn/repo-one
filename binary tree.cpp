#include <iostream>
#include <malloc.h>
#include <conio.h>
#define Nil NULL
using namespace std;
struct nod
{
    struct nod *left;
    char data;
    struct nod *right;
};
  return n;

void BinaPokok (POKOK **T)
{
    *T = Nil;
}
bool PokokKosong (POKOK *T)
{
    return ((bool) (T == Nil));
}

void TambahNod(NOD **p, char item)
{
    NOD *n;
    n = NodBaru(item);
    *p = n;
}

void preOrder (POKOK *T)
{
    if (!PokokKosong (T))
    {
        cout<<" "<< T -> data;
        preOrder(T -> left);
        preOrder(T -> right);
    }
}

void inOrder(POKOK *T)
{
    if (!PokokKosong (T))
    {
        inOrder(T -> left);
        cout<<" "<< T -> data;
        inOrder(T -> right);
    }
}

void postOrder(POKOK *T)
{
    if (!PokokKosong(T))
    {
        postOrder (T -> left);
        postOrder (T -> right);
        cout<<" "<< T -> data;
    }
}
int main()
{
    POKOK *pohon;
    POKOK *nama;
    char buah, panggilan;
    cout<<"Nama  : AHMAD SAEFULLAH "<<endl;
    cout<<"NPM   : 1910631170199"<<endl;
    cout<<endl;
    BinaPokok(&nama);
    TambahNod(&nama, buah = 'A');
    TambahNod(&nama -> left, buah = 'D');
    TambahNod(&nama -> left -> left, buah = 'A');
    TambahNod(&nama -> left -> right, buah = 'M');
    TambahNod(&nama -> right,buah = 'A');
    cout<<"Kata yang di Tree : ADAMA "<<endl<<endl;
    cout<<"Pre-Order : ";
    preOrder(nama);
    cout<<endl;
    cout<<"In-Order : ";
    inOrder(nama);
    cout<<endl;
    cout<<"Post-Order : ";
    postOrder(nama);
    cout<<endl;


    BinaPokok(&pohon);
    TambahNod(&pohon, buah = 'R');
    TambahNod(&pohon -> left, buah = 'E');
    TambahNod(&pohon -> left -> left, buah = 'D');
    TambahNod(&pohon -> left -> right, buah = 'I');
    TambahNod(&pohon -> right,buah = 'S');
    cout<<endl;
    cout<<endl;
    cout<<"Kata yang di Tree : REDIS"<<endl;
    cout<<endl;
    cout<<"Pre-Order : ";
    preOrder(pohon);
    cout<<endl;
    cout<<"In-Order : ";
    inOrder(pohon);
    cout<<endl;
    cout<<"Post-Order : ";
    postOrder(pohon);

    cout<<endl;
    cout<<endl;
    return 0;
    getch();
}

