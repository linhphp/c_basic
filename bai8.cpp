#include <iostream>

using namespace std;

int main()
{
    //tim so lon nhat
    int lenght = 0;

    cout << "nhap vao chieu dai mang: ";
    cin >> lenght;

    int a[lenght];
    int max;

    for (int i = 0; i < lenght; i++)
    {
        cout << "nhap vao so thu " << (i + 1) << ": ";
        cin >> a[i];
    }
    max = a[0];
    for (int j = 0; j < lenght; j++)
    {
        if (max < a[j])
        {
            max = a[j];
        }
    }
    cout << "so lon nhat la: " << max << endl;
}