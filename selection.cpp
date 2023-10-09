#include<iostream>
using namespace std;
int sort(int a[],int n);
int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the Element of array\n";
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<"Before sorting\n";
     for(int i=1;i<=n;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<"\n";
    }
    sort(a,n);
    cout<<"After sorting\n";
    for(int i=1;i<=n;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<"\n";
    }
    return 0;
}
int sort(int a[],int n){
    int index,temp;
    for(int i=1;i<n;i++){
        index=i;
        for(int j=i+1;j<=n;j++){
            if(a[j]<a[index]){
                index=j;
            }
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    return 0;
}