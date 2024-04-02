#include <iostream>
using namespace std;


template<typename T>
T sumelements(T array[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int intarray[] = { 1, 2, 3, 6 ,7, 9 };
    double doublearray[] = { 1.4, 4.7, 3.86, 7.378 };

    int intsum = sumelements(intarray, 6);
    double doublesum = sumelements(doublearray, 4);

    cout << "Sum of integers: " << intsum << endl;
    cout << "Sum of doubles: " << doublesum << endl;
}
