#include <iostream>
#include <time.h>
using namespace std;
 
void main()
{
    const int str = 5;
    const int stb = 10;
    srand(time(0));
    setlocale(LC_ALL, "rus");
 
    int ar[str][stb];
 
    //заполняем массив
    for (int i = 0; i < str; i++)
    {
        for (int j = 0; j < stb; j++)
        {
            ar[i][j] = rand() % 50;
            cout << ar[i][j] << "\t";
        }
        cout << endl<<endl;
    }
 
    //считаем сумму
    int sum = 0;
    for (int i = 0; i < str; i++)
    {
        for (int j = 0; j < stb; j++)
        {
            sum += ar[i][j];
        }
    }
    cout <<"Сумма значений всех элементов массива = "<< sum <<"\n\n";
 
    //считаем среднее арифметическое
    int ave;
    ave = sum / (str*stb);
    cout << "Среднее арифметическое всех элементов массива = " << ave << "\n\n";
}