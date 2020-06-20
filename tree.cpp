#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct node
{
    char data;
    node *kiri;
    node *kanan;
};

node *akar = NULL;

node *addNode(node **akar, char isi)
{
    if ((*akar) == NULL){
        node *baru;
        baru = new node;
        baru ->data = isi;
        baru ->kiri = NULL;
        baru ->kanan = NULL;
        (*akar) = baru;
    }
}

node *preOrder(node *akar) 
{
    if (akar != NULL) {
        cout <<" " <<akar ->data;
        preOrder(akar ->kiri);
        preOrder(akar ->kanan);
    }
}

node *inOrder(node *akar) 
{
    if (akar != NULL) {
        inOrder(akar ->kiri);
        cout <<" " <<akar ->data;
        inOrder(akar ->kanan);
    }
}

node *postOrder(node *akar) 
{
    if (akar != NULL) {
        postOrder(akar ->kiri);
        postOrder(akar ->kanan);
        cout <<" " <<akar ->data;
    }
}

int main()
{
    char abjad;
    cout <<"\n\tPosisi Awal Tree:\n\n\n";
    cout <<"\t     M\n\t    / \\\n\t   E    L\n\t  / \\  / \\\n\t A  I  B  O\n\t/          \\\n\tU           D\n\n";

    addNode(&akar, abjad = 'M');
    addNode(&akar ->kiri, abjad = 'E');
    addNode(&akar ->kanan, abjad = 'L');
    addNode(&akar ->kiri ->kiri, abjad = 'A');
    addNode(&akar ->kiri ->kanan, abjad = 'I');
    addNode(&akar ->kiri ->kiri ->kiri, abjad = 'U');
    addNode(&akar ->kanan ->kiri, abjad = 'B');
    addNode(&akar ->kanan ->kanan, abjad = 'O');
    addNode(&akar ->kanan ->kanan ->kanan, abjad = 'D');

    cout <<"PreOrder  : ";
    preOrder(akar);
    cout <<"\nInOrder   : ";
    inOrder(akar);
    cout <<"\nPostOrder : ";
    postOrder(akar);

    cout << "\n\nHapiz Nuddin Setiadi\n";
    cout << "20190801364" <<endl <<endl ;
    system("pause");

    return 0;
} 
