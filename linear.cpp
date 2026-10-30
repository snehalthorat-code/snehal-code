#include<iostream>
using namespace std;
int linear_search(int a[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    int a[20];
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter"<<n<<"integers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter the target elementto search for:";
    cin>>x;
    int location=linear_search(a,n,x);
    if (location !=-1)
    {
        cout<<"Element"<<x<<"not at index:"<<location<<endl;
    }
    else{
        cout<<"Element"<<x<<"not found in the array."<<endl;
    }
    return 0;
}


/*OUTPUT
Microsoft Windows [Version 10.0.22631.5472]
(c) Microsoft Corporation. All rights reserved.

D:\snehal thorat> g++ linear.cpp -o linear

D:\snehal thorat> .\linear.cpp

D:\snehal thorat>

D:\snehal thorat> .\linear
Enter the size of the array:6
Enter6integers:
20 30 40 50 60 70 
Enter the target elementto search for:60
Element60not at index:4

D:\snehal thorat>
*/