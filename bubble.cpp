#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        }
    }
    }
}
int main() 
{
    int n;
    int a[10];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " integers in any order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubble_sort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
} 


/*OUTPUT
D:\snehal thorat>.\bubble
Enter the size of the array: 6
Enter 6 integers in any order: 
20 30 40 50 60 70 
Sorted array: 20 30 40 50 60 70 

D:\snehal thorat>
*/