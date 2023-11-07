#include <iostream>
#include <iomanip>

using namespace std;

void AddArray(int* a, const int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i];
    }
}

void Print(int* a, const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << a[i];

        if (i == 9)
        {
            cout << "    " << endl;
        }
    }
}

int FindMin(int* a, const int n)
{
    int min = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
}

template <typename T>
void AddArrayT(T* a, const int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i];
    }
}

template <typename T>
void PrintT(T* a, const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << a[i];

        if (i == n - 1)
        {
            cout << "    " << endl;
        }
    }
}

template <typename T>
int FindMinT(T* a, const int n)
{
    T min = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
}

int main()
{
    const int n = 10;
    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Non-Template Results:" << endl;

    AddArray(a, n);

    cout << "ARRAY = " << endl;
    cout << "    ";

    Print(a, n);

    int nonTemplateMin = FindMin(a, n);

    cout << "Min element = " << nonTemplateMin << endl;

    int b[n] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    cout << "Template Results:" << endl;

    AddArrayT(b, n);

    cout << "ARRAY = " << endl;
    cout << "    ";

    PrintT(b, n);

    int templateMin = FindMinT(b, n);

    cout << "Min element = " << templateMin << endl;

    return 0;
}