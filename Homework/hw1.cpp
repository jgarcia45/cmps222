//
#include <iostream>
using namespace std;
void showValue(int quantity);
void calculateHalf(double *number);
int *buildArray(int n);

int main()
{
    //int arr[1000];
    int n;
    cout << "How big is your array?";
    cin >> n;
    int *arr2 = buildArray(n);
    cout << arr2[0] << endl;

    showValue(125);
    double result = 125.0;
    calculateHalf(&result);
    cout << result << "\n" << flush;
    delete [] arr2;
    return 0;
}

int *buildArray(int n)
{
    int *ptr = new int [n];
    ptr[0] = 512;
    return ptr;
}

void calculateHalf(double *number)
{
    *number = *number * 0.5;
}
void showValue(int quantity)
{
    cout << quantity << endl;
}
