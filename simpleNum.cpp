#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Введите размерность массива: ";
    cin >> n;
    int A[n];
    
    for (int i = 0; i < n ; i++){
        cout << "A[" << i << "] = " ;
        cin >> A[i];
    }
    
    int sum = 0;
    for (int i=0; i < n; i++)
    {
        for (int j=2; j <= A[i] / 2; j++)
        {
            if (A[i] % j == 0 && A[i] != j)
            {
                A[i] = 0;
                break;
            }
        }
        if (A[i] != 0 and A[i] != 1)
        {
            cout <<"Простое число = " << A[i] << endl;
            sum += 1;
        }
    } 
    cout << "Количество простых чисел = ";  
    cout << sum;
    return 0;
}
