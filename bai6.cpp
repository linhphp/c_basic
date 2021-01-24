#include <iostream>

using namespace std;

int main()
{
    int lenght;
    cout << "nhap so luong toa tau: ";
    cin >> lenght;
    int array[lenght];
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        cout << "nhap phan tu thu " << (i + 1) << ": ";
        cin >> array[i];
        sum += array[i];
    }
    cout << "so can nang tu toa: ";
    for (int i = 0; i < lenght; i++)
    {
        if (i == (lenght - 1))
        {
            cout << array[i] << ".";
        }
        else
        {
            cout << array[i] << ", ";
        }
    }
    cout << endl;
    cout << "tong so can nang la: " << sum << endl;
}