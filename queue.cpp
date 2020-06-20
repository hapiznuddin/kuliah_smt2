#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *tail, *now, *head;
int filledQueue = 0;
int sum = 0;


void newQueue()
{
    tail = NULL;
    head = NULL;
    filledQueue = 0;
}

void push(int data)
{
    now = new Node;
    if (head == NULL)
    {
        now->data = data;
        now->next = NULL;
        tail = now;
        head = now;
    }
    else
    {
        now->data = data;
        now->next = NULL;
        tail->next = now;
        tail = now;
    }
}

void enqueue()
{
    int new_Data;
    cout << "Data : ";
    cin >> new_Data;
    push(new_Data);
}

void dequeue()
{
    system("cls");
    if (head == NULL)
    {
        cout << "Antrian Kosong!!\n";
    }
    else
    {
        filledQueue -= 1;
        Node *temp;
        temp = head;
        head = head->next;
        delete temp;
        cout << "Dequeue Complete \n";
    }
    system("pause");
}

void print()
{
    system("cls");
    if (head == NULL)
    {
        system("cls");
        cout << "Antrian Kosong!!\n";
    }
    else
    {
        now = head;
        cout << "\nData : \n";
        while (now != NULL)
        {
            cout << now->data << endl;
            now = now->next;
        }
    }
}

void total()
{
    print();
    if (head == NULL)
    {
        system("cls");
        cout << "Antrian Kosong!!\n";
    }
    else
    {
        now = head;
        while (now != NULL)
        {
            sum += now->data;
            now = now->next;
        }
    }
}

void ratarata(int dataCount)
{
    float avg;
    if (sum != 0)
    {
        avg = (float)sum / (float)dataCount;
    }
    else
    {
        total();
        avg = (float)sum / (float)dataCount;
    }
    print();
    cout << "Total     = " << sum << endl;
    cout << "Data      = " << dataCount << endl;
    cout << "Rata-Rata = " << avg << endl;
    system("pause");
}

void nilaiKecil()
{
    int minVal;
    if (head == NULL)
    {
        system("cls");
        cout << "Antian Kosong!!\n";
    }
    else
    {
        now = head;
        minVal = now->data;
        while (now != NULL)
        {
            if (minVal > now->data)
            {
                minVal = now->data;
            }
            now = now->next;
        }
    }
    print();
    cout << "Nilai Terkecil = " << minVal << endl;
    system("pause");
}
void nilaiBesar()
{
    int maxVal;
    if (head == NULL)
    {
        system("cls");
        cout << "Antrian Kosong!!\n";
    }
    else
    {
        now = head;
        maxVal = now->data;
        while (now != NULL)
        {
            if (maxVal < now->data)
            {
                maxVal = now->data;
            }
            now = now->next;
        }
    }
    print();
    cout << "Nilai Terbesar = " << maxVal << endl;
    system("pause");
}

int main()
{
    int pil, queueCount;
    newQueue();
    do
    {
        system("cls");
        cout << "---------- Queue ----------\n";
        cout << "1. Enqueue \n2. Dequeue \n3. Antrian Baru \n4. Print Data \n5. Total \n6. Rata-Rata \n7. Nilai Terkecil \n8. Nilai Terbesar \n9. Exit" << endl;
        cout << "Select = ";
        cin >> pil;

        switch (pil)
        {
        case 1:
            system("cls");

            if (filledQueue == 0)
            {
                cout << "Jumlah Antrian = ";
                cin >> queueCount;
                for (int i = 1; i <= queueCount; i++)
                {
                    system("cls");
                    cout << "Data " << i << endl;
                    enqueue();
                    filledQueue++;
                }
            }
            else
            {
                if (filledQueue < queueCount)
                {
                    filledQueue++;
                    enqueue();
                }
                else
                {
                    system("cls");
                    cout << "Antrean Penuh\n";
                    system("pause");
                }
            }

            break;
        case 2:
            dequeue();
            break;
        case 3:
            system("cls");
            newQueue();
            cout << "Antrian Baru Telah Dibuat!!\n";
            system("pause");
            break;
        case 4:
            print();
            system("pause");
            break;
        case 5:
            total();
            cout << "Total Nilai = " << sum << endl;
            system("pause");
            break;
        case 6:
            ratarata(queueCount);
            break;
        case 7:
            nilaiKecil();
            break;
        case 8:
            nilaiBesar();
            break;
        }

    } while (pil != 9);

    system("cls");
    cout << "Hapiz Nuddin Setiadi\n";
    cout << "20190801364" <<endl <<endl ;
    system("pause");

    return 0;
}