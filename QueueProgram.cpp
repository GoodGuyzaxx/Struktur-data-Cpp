#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
char pil;
int jml;

struct node
{
    char kar;
    node *next;
};
node *tail, *now, *head;

void buatnodebaru()
{
    tail = NULL;
    head = NULL;
}

void push(char ch)
{
    now = new node;
    if (head == NULL)
    {
        now->kar = ch;
        now->next = NULL;
        tail = now;
        head = now;
    }
    else
    {
        now->kar = ch;
        now->next = NULL;
        tail->next = now;
        tail = now;
    }
}

void enqueue()
{
    int i;
    char temp;
    cout << "Masukan & krakter : ";
    cin >> temp;
    push(temp);
}

void dequeue()
{
    if (head == NULL)
    {
        cout << "Antrean Kosong..";
    }
    else
    {
        jml = jml - 1;
        char delete_element = head->kar;
        node *temp;
        temp = head;
        head = head->next;
        delete temp;
    }
}

void tampil()
{
    if (head == NULL)
    {
        cout << "\n\tMaaf data kosong";
    }
    else
    {
        now = head;
        cout << "\n\tData ==> ";
        while (now != NULL)
        {
            cout << now->kar;
            now - now->next;
            cout << " ";
        }
    }
}

void input()
{
    cout << "\n1. Enqueue \n2. Dequeue \n3. Tampil \n4. Exit";
    do
    {
        cout << "\nMasukan Pilihan Anda : ";
        cin >> pil;

        switch (pil)
        {
        case '1':
            if (jml < 10)
            {
                jml = jml + 1;
                enqueue();
            }
            else
            {
                cout << "Antrian Penuh";
                getch();
            }
            break;
        case '2':
            dequeue();
            break;
        case '3':
            tampil();
            break;
        case '4':
            exit(1);
            break;
        }
    } while (1);
}

int main()
{
    buatnodebaru();
    jml = 0;
    system("CLS");
    input();
    getch();
}