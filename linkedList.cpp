#include <iostream>
#define max 99

using namespace std;

struct Node
{
    int nomorBuku, harga;
    char judul[max];
    Node *next;
};

Node *head, *tail, *temp;

bool isEmpty();
void tambahData();
void edit();
void display();

int main()
{
    int pilih, inputNumber;
    head = new Node;
    head = NULL;

    do
    {
        system("cls");
        cout <<"===============================\n";
        cout <<"  Single Linked List Circular   \n";
        cout <<"===============================\n";
        cout << "1. Tampilkan\n";
        cout << "2. Input Data\n";
        cout << "3. Edit Harga\n";
        cout << "4. Keluar\n";
        cout <<"===============================\n";
        cout << "Select = ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            display();
            system("pause");
            break;

        case 2:
            system("cls");
            tambahData();
            break;

        case 3:
            system("cls");
            edit();
            break;      
        }

    } while (pilih != 4);
    system("cls");
    cout <<"Nama : Hapiz Nuddin Setiadi \n";
    cout <<"NIM  : 20190810364 \n\n";
    cout << "Terima Kasih  :)" << endl;
    system("pause");
    return 0;
}

bool isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void tambahData()
{
    temp = new Node;
    cout << "Masukan Nomor Buku = "; cin >> temp-> nomorBuku;
    cout << "Masukan Judul Buku = "; cin.ignore(10, '\n'),cin.getline(temp-> judul, max);
    cout << "Masukan Harga Buku = "; cin >> temp-> harga;
    printf("\n");
    temp-> next = temp;

    if (isEmpty())
    {
        head = tail = temp;
        head-> next = head;
        tail-> next = tail;
    }
    else
    {
        tail-> next = temp;
        tail = temp;
        tail-> next = head;
    }

    cout << "Data telah dimasukan pada bagian belakang" << endl;
    system("pause");
}

void display()
{
    if (!isEmpty())
    {
        temp = head;
        cout << "==============================\n";
        cout << "Nomor Buku        = " << temp-> nomorBuku << endl;
        cout << "Judul Buku        = " << temp-> judul << endl;
        cout << "Harga Buku        = " << temp-> harga << endl;
        cout << "==============================\n";
        temp = temp-> next;

        while (temp != head)
        {
            cout << "No Buku        = " << temp-> nomorBuku << endl;
            cout << "Judul Buku     = " << temp-> judul << endl;
            cout << "Harga Buku     = " << temp-> harga << endl;
            cout << "===========================\n";
            temp = temp-> next;
        }
        printf("\n");
    }
    else
    {
        cout << "Data Kosong!" << endl;
    }
}

void edit()
{
    int searchNo;
    display();
    cout << "Masukan Nomor Buku yang ingin diedit = ";
    cin >> searchNo;

    if (!isEmpty())
    {
        temp = head;
        if (searchNo == temp-> nomorBuku)
        {
            cout << "Masukan harga baru = ";
            cin >> temp-> harga;
        }
        temp = temp-> next;

        while (temp != head)
        {
            if (searchNo == temp-> nomorBuku)
            {
                cout << "Masukan harga baru = ";
                cin >> temp-> harga;
            }
            temp = temp-> next;
        }
    }
}