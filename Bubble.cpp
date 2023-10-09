#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
     cout<<"Array element before sorting\n";
    for(int i=0;i<n;i++){
       cout<<"a["<<i+1<<"] = "<<a[i]<<"\n";
    }
    //bubble sort;
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
          if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
        }
    }
    cout<<"After the sorting\n";
    for(int i=0;i<n;i++){
         cout<<"a["<<i+1<<"] = "<<a[i]<<"\n";
    }
    return 0;
}
