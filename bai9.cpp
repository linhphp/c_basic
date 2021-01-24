#include <iostream>

using namespace std;

int main()
{
    //tim so nho nhat
    int lenght = 0;

    cout << "nhap vao chieu dai mang: ";
    cin >> lenght;

    int a[lenght];

    for (int i = 0; i < lenght; i++)
    {
        cout << "nhap vao so thu " << (i + 1) << ": ";
        cin >> a[i];
    }
    int min = a[0];
    for (int i = 0; i < lenght; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "so nho nhat la: " << min << endl;
}