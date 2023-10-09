/*                                            Non_Comparising_Sorting                                                  */

#include<iostream>
using namespace std;
int sort(int a[],int n);
int maximum(int a[],int n);
int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the element of array\n";
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<"Before sorting the element\n";
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
int maximum(int a[],int n){
    int max=0;
    for(int i=1;i<=n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
int sort(int a[],int n){
    int large,l,k;
    large= maximum(a,n);
    int *d= new int(large+1);
    for(int i=1;i<=large+1;i++){
        d[i]=0;
    }
    for(int i=1;i<=n;i++){
      d[a[i]]=d[a[i]]+1;
    }
     k=1;
     l=1;
    while(l<=large+1){
     if(d[l]>0){
        a[k]=l;
        d[l]=d[l]-1;
        k++;
     }
     else{
     l++;
     }
    }
    return 0;
}