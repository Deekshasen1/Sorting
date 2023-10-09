#include <iostream>
using namespace std;
int shell(int a[], int n);
int main()
{
    int n;
    cout << "Enter the size of array\n";
    cin >> n;
    int a[n];
    cout << "Enter the Element of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Array element before sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "] = " << a[i] << "\n";
    }
    shell(a, n);
    cout << "After the sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "] = " << a[i] << "\n";
    }
    return 0;
}
//sorting algo
int shell(int a[],int n){
    int s=n/2;
    while(s>0){
        int i,j,temp;
        for(i=s;i<n;i++){
            j=i;
            temp=a[j];
            while(j>(s-1) && a[j-s]>temp){
              a[j]=a[j-s];
              j=j-s;
            }
            a[j]=temp;
        }
        s=s/2;
    }
    return 0;
}
