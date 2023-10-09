/*                                            Non_Comparising_Sorting                                                  */

#include<iostream>
using namespace std;
int sort(int a[],int n);
int maximum(int a[],int n);
int counting_sort(int a[],int n, int rem);
int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the element of array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Before sorting the element\n";
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<"\n";
    }
    sort(a,n);
    cout<<"After sorting\n";
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<"\n";
    }
    return 0;
}
int maximum(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
int sort(int a[],int n){
    int large=maximum(a,n);
    for(int i=1;large/i>0;i*=10){
        counting_sort(a,n,i);
    }
    return 0;
}
int counting_sort(int a[],int n,int rem){
    int imaginary[n];
    int count[10]={0};
    for(int  i=0;i<n;i++)
    count[(a[i]/rem)%10]++;

    for(int  i=1;i<10;i++)
    count[i]=count[i]+count[i-1];

    for(int i=n-1;i>=0;i--){
        imaginary[count[(a[i]/rem)%10]-1]=a[i];
        count[(a[i]/rem)%10]--;
    }

    for(int i=0;i<n;i++){
      a[i]=imaginary[i];
    }
    return 0;
}