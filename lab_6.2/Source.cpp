#include <iostream>
#include <locale>

using namespace std;

void SwapHalves(int* a, const int n)
{
    int* tmp = new int[n]; // Створюємо допоміжний масив для зберігання першої половини

    // Копіюємо першу половину в допоміжний масив
    for (int i = 0; i < n; i++)
    {
        tmp[i] = a[i];
    }

    // Переміщуємо другу половину на початок вектора
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i + n];
    }

    // Переміщуємо першу половину на місце другої половини
    for (int i = 0; i < n; i++)
    {
        a[i + n] = tmp[i];
    }

    delete[] tmp; // Звільняємо пам'ять, виділену для допоміжного масиву
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

    cout << "Оригiнальний масив:" << endl;  
    print(a, n);

    SwapHalves(a, n);

    cout << "Масив пiсля перенесення:" << endl;
    print(a, n);

    return 0;
}