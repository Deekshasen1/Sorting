#include<iostream>
using namespace std;
int merge(int a[],int l,int mid, int h);
int sort(int a[],int low, int high);
int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the Element of array\n";
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<"Before sorting the element\n";
    for(int i=1;i<=n;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<"\n";
    }
    sort(a,1,n);
    cout<<"After sorting\n";
    for(int i=1;i<=n;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<"\n";
    }
    return 0;
}
int sort(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        sort(a,low,mid);
        sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    return 0;
}
int merge(int a[],int l,int mid, int h){
    int i=l,j=mid+1,k=l,b[100];
    while(i<=mid && j<=h){
        if(a[i]<=a[j]){
           b[k]=a[i];
           k++;
           i++;
        }
        else{
            b[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
         b[k]=a[i];
           k++;
           i++;
    }
    while(j<=h){
         b[k]=a[j];
           k++;
           j++;
    }
    for(int c=l;c<=h;c++){
        a[c]=b[c];
    }
    return 0;
}