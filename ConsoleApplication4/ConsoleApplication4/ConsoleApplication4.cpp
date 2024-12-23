#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
// S = cos(x) + cos(3x)/3^2 + ... + cos((2n-1)x)/(2n-1)^2
double S(double x, int n)
{
    if (n == 0)
    {
        return 0;
    }
    return cos((2 * n - 1) * x) / pow((2 * n - 1), 2) + S(x, n - 1);

}

int main()
{
    clock_t start, end;
    setlocale(LC_ALL, "Rus");
    double x;
    int n;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите n: ";
    cin >> n;
    start = clock();
    for (int i = 1; i <= n; i++)
    {
        cout << "Шаг " << i << ": " << S(x, i) << endl;
    }
    cout << endl << "S = " << S(x, n) << endl;
    end = clock();
    double time = double(end - start) / 1000.0;
    cout << "Время выполнения: " << time << endl;
    return 0;
}