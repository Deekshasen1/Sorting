#include<iostream>
using namespace std;
int insertion(int a[],int n);
int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the Element of array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     cout<<"Array element before sorting\n";
    for(int i=0;i<n;i++){
       cout<<"a["<<i+1<<"] = "<<a[i]<<"\n";
    }
    //Insertion sort
    insertion(a,n);
     cout<<"After the sorting\n";
    for(int i=0;i<n;i++){
         cout<<"a["<<i+1<<"] = "<<a[i]<<"\n";
}
return 0;
}
int insertion(int a[],int n){
    int temp,j;
    for(int i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(a[j]>temp && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    return 0;
}