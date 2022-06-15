#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
struct Tnode
{
    int data;
    Tnode *next;
};
Tnode *head, *tail;
void init()
{
    head = NULL;
    tail = NULL;
}
int IsEmpty()
{
    if (tail == NULL)
        return 1;
    else
        return 0;
}
void insertDepan(int databaru)
{
    Tnode *baru;
    baru = new Tnode;
    baru->data = databaru;
    baru->next = NULL;

    if (IsEmpty() == 1)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
    cout << "Data masuk\n";
    system("CLS");
}

void insertBelakang(int databaru)
{
    Tnode *baru, *bantu;
    baru = new Tnode;
    baru->data = databaru;
    baru->next = NULL;

    if (IsEmpty() == 1)
    {
        head = baru;
        tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
    cout << "Data masuk\n";
    system("CLS");
}

void tampil()
{
    Tnode *bantu;
    bantu = head;
    if (IsEmpty() == 0)
    {
        cout << "Data Yang Masuk: ";
        while (bantu != NULL)
        {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
    }
    else
        cout << "Data yang masuk: Masih Kosong\n";
}

void hapusDepan()
{
    int d;
    Tnode *hapus;
    if (IsEmpty() == 0)
    {
        if (head != tail)
        {
            hapus = head;
            d = hapus->data;
            head = head->next;
            delete hapus;
        }
        else
        {
            d = tail->data;
            head = tail = NULL;
        }
        cout << d << "Terhapus";
    }
    else
        cout << "Masih Kosong\n";
    system("cLS");
}

void hapusBelakang()
{
    Tnode *bantu, *hapus;
    int d;
    if (IsEmpty() == 0)
    {
        bantu = head;
        if (head != tail)
        {
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            hapus = tail;
            tail = bantu;
            d = hapus->data;
            delete hapus;
            tail->next = NULL;
        }
        else
        {
            d = tail->data;
            head = tail = NULL;
        }
        cout << d << "terhapus\n";
    }
    else
        cout << "masih kosong\n";
    system("CLS");
}

main()
{
    int pil, databaru;
    cout << "*------------------------------*" << endl;
    cout << "     Single Linked List        " << endl;
    cout << "*------------------------------*" << endl;

    do
    {
        cout << "\n";
        cout << "\n****************************";
        cout << "\n1. insert Depan";
        cout << "\n2. insert Belakang";
        cout << "\n3. Delete Depan";
        cout << "\n4. Delete Belakang";
        cout << "\n5. Tampil Data";
        cout << "\n\n silahkan Masukan Pilihan Anda: ";
        cin >> pil;
        cout << "\n";
        switch (pil)
        {
        case 1:
            cout << "masukan data= ";
            cin >> databaru;
            insertDepan(databaru);
            break;

        case 2:
        {
            cout << "Masukan Data= ";
            cin >> databaru;
            insertBelakang(databaru);
            break;
        }

        case 3:
        {
            hapusDepan();
            break;
        }

        case 4:
        {
            hapusBelakang();
            break;
        }

        case 5:
        {
            tampil();
            break;
        }

        default:
        {
            cout << "\n Maaf, Tidak ada dalam pilihan";
        }
        }
    } while (pil >= 1 && pil <= 5);
}