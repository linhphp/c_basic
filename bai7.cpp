#include <iostream>

using namespace std;

int main()
{
    int socauhoi;
    int dapandung = 0;
    cout << "nhap vao so cau hoi: ";
    cin >> socauhoi;

    char acm[socauhoi];

    if (socauhoi <= 1)
    {
        cout << "khong co dap an dung" << endl;
    }
    else if (socauhoi > 1)
    {
        for (int i = 0; i < socauhoi; i++)
        {
            cout << "nhap vao dap an thu " << (i + 1) << ": ";
            cin >> acm[i];
            if (acm[i] == acm[i - 1])
            {
                dapandung++;
            }
        }
        cout << dapandung << endl;
    }
}