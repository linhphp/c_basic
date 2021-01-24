#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int sohocsinh;
    int socauhoi;
    ifstream data;
    data.open("./data2.txt");
    data >> sohocsinh >> socauhoi;
    char dapanNhatruong[50];
    char dapanHocsinh[sohocsinh][socauhoi];
    int point[sohocsinh];
    string tenhocsinh[sohocsinh];

    // cout << sohocsinh << endl;
    // cout << socauhoi << endl;

    // bo qua line trong dau tien
    string tam[1];
    for (int i = 0; i < 1; i++)
    {
        getline(data, tam[i]);
    }
    // nhap ten hoc sinh
    for (int i = 0; i < sohocsinh; i++)
    {
        getline(data, tenhocsinh[i]);
        point[i] = 0;
    }
    //nhap dap an cua nha truong
    for (int i = 0; i < socauhoi; i++)
    {
        data >> dapanNhatruong[i];
    }
    //nhap dap an cho tung hoc sinh
    for (int i = 0; i < socauhoi; i++)
    {
        for (int j = 0; j < sohocsinh; j++)
        {
            data >> dapanHocsinh[j][i];
        }
    }
    // hien thi danh sach hoc sinh
    for (int i = 0; i < sohocsinh; i++)
    {
        cout << tenhocsinh[i] << endl;
    }
    //tinh diem cua hoc sinh
    for (int i = 0; i < socauhoi; i++)
    {
        for (int j = 0; j < sohocsinh; j++)
        {
            if (dapanNhatruong[i] == dapanHocsinh[j][i])
            {
                point[j]++;
            }
        }
    }
    cout << sohocsinh << endl;
    for (int i = 0; i < sohocsinh; i++)
    {
        cout << "diem cua hoc sinh " << tenhocsinh[i] << " la: " << point[i] << endl;
    }
}