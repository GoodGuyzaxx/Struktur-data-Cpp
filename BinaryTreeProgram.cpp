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
    if ((*akar) == NULL)
    {
        node *baru;
        baru = new node;
        baru->data = isi;
        baru->kiri = NULL;
        baru->kanan = NULL;
        (*akar) = baru;
    }
}

node *preOrder(node *akar)
{
    if (akar != NULL)
    {
        cout << " " << akar->data;
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

node *inOrder(node *akar)
{
    if (akar != NULL)
    {
        inOrder(akar->kiri);
        cout << " " << akar->data;
        inOrder(akar->kanan);
    }
}

node *postOrder(node *akar)
{
    if (akar != NULL)
    {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << " " << akar->data;
    }
}

main()
{
    char abjad;
    cout << "\n\n\t Posisi Awal Tree: \n\n";
    cout << "\t A\n\t / \\\n\t    B   C\n\t   /\n\t   D\n\t / \\\n\t  / \\\n\t E  F\n\n";
    addNode(&akar, abjad = 'A');
    addNode(&akar->kiri, abjad = 'B');
    addNode(&akar->kanan, abjad = 'C');
    addNode(&akar->kiri->kiri->kiri, abjad = 'D');
    addNode(&akar->kiri->kiri->kiri, abjad = 'E');
    addNode(&akar->kiri->kiri->kanan, abjad);
    cout << "Tampil Preorder : ";
    preOrder(akar);
    cout << "\nTampil InOrder : ";
    preOrder(akar);
    cout << "\nTampil PostOrder : ";
    postOrder(akar);
}
