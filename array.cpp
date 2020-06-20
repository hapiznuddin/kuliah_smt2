#include <iostream>
#include <conio.h>

using namespace std;
main()
{
    int hapusArray;
    int panjangArray;
    int arrayNumber[5];

    cout << "Panjang Array : ";
    cin >> panjangArray;

    for (int i = 0; i < panjangArray; i++)
    {
        cout << "Input Array Indek ke : " << i + 1 << " : ";
        cin >> arrayNumber[i];
    }
    cout << endl;

    for (int i = 0; i < panjangArray; i++)
    {
        cout << "Indek Array ke-" << i + 1 << " : " << arrayNumber[i] << endl;
    }

    cout << "\nHapus Indek Array ke : ";
    cin >> hapusArray;
    cout << endl;

    for (int i = hapusArray - 1; i < panjangArray; i++)
    {
        arrayNumber[i] = arrayNumber[i + 1];
    }

    for (int i = 0; i < panjangArray - 1; i++)
    {
        cout << "Indek " << i + 1 << " : " << arrayNumber[i] << endl;
    }
}