#include <iostream>
#include <locale>

using namespace std;

void SwapHalves(int* a, const int n)
{
    int* tmp = new int[n]; // ��������� ��������� ����� ��� ��������� ����� ��������

    // ������� ����� �������� � ��������� �����
    for (int i = 0; i < n; i++)
    {
        tmp[i] = a[i];
    }

    // ��������� ����� �������� �� ������� �������
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i + n];
    }

    // ��������� ����� �������� �� ���� ����� ��������
    for (int i = 0; i < n; i++)
    {
        a[i + n] = tmp[i];
    }

    delete[] tmp; // ��������� ���'���, ������� ��� ���������� ������
}

void create(int* a, const int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        a[i] = i + 1;
    }
}

void print(const int* a, const int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_CTYPE, "ukr");
    const int n = 4;
    int a[2 * n];

    create(a, n);

    cout << "����i������� �����:" << endl;  
    print(a, n);

    SwapHalves(a, n);

    cout << "����� �i��� �����������:" << endl;
    print(a, n);

    return 0;
}