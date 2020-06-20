#include <iostream> 
using namespace std;
 
int binarySearch(int array[], int size, int searchValue)
{
    int low = 0;
    int high = size - 1;
 
    int mid;
 
    while (low <= high)
    {
		mid = (low + high) / 2;
        if(searchValue == array[mid])
        {
            return mid;
        }
        else if (searchValue > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
 return -1;
}
 
int main()
{
    int a[] = {12, 22, 34, 47, 55, 67, 82, 98};
    int userValue;
    cout<<"Array = {12,22,34,47,55,67,82,98"<<endl;
    cout << "Masukan Integer : ";
    cin >> userValue;
    int result = binarySearch(a, 8, userValue);
    if(result >= 0)
    {
        cout << "Angka " << a[result] << " ditemukan pada "
                " elemen indeks ke " << result << endl;
    }
    else
    {
        cout << "angka " << userValue << " tidak ditemukan " << endl;
    }

    system("pause");
    return 0;
}
