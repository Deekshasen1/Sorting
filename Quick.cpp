#include<iostream>
using namespace std;
int sort(int a[],int high,int low);
int partion(int a[],int start, int end);
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
    sort(a,1,n);
    cout<<"After sorting\n";
    for(int i=1;i<=n;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<"\n";
    }
    return 0;
}
int sort(int a[],int high,int low){
    int index;
    if(high<low){
        index=partion(a,high,low);
        sort(a,high,index-1);
        sort(a,index+1,low);
    }
    return index;
}
int partion(int a[],int start, int end){
    int piv=a[start];
    int i=start+1;
    int j=end;
    int temp;
    do{
        while (piv>=a[i])
        {
           i++;
        }
        while (piv<=a[j])
        {
            j--;
        }
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    temp=a[start];
    a[start]=a[j];
    a[j]=temp;
    return j;
}