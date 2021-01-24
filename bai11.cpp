#include <iostream>

using namespace std;

int main()
{
    //thuat toan sap xep tang dan
    int lenght = 0;

    cout << "nhap vao chieu dai mang: ";
    cin >> lenght;

    int a[lenght];

    for (int i = 0; i < lenght; i++)
    {
        cout << "nhap vao so thu " << (i + 1) << ": ";
        cin >> a[i];
    }
    int trungGian;
    for (int i = 0; i < lenght - 1; i++)
    {
        for (int j = i + 1; j < lenght ; j++)
        {
            if (a[i] > a[j])
            {
                trungGian = a[i];
                a[i] = a[j];
                a[j] = trungGian;
            }
        }
    }
    cout << "sap xep tang dan: ";

    for (int i = 0; i < lenght; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}