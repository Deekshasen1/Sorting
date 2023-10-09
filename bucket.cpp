/*                                            Non_Comparising_Sorting                                     */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int bucket(float a[],int n);
int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    float a[n];
    cout<<"Enter the element of array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Before sorting the element\n";
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<"\n";
    }
    bucket(a,n);
    cout<<"After sorting\n";
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<"\n";
    }
    return 0;
}
int bucket(float a[],int n){
    vector<float>b[n];// bucket
     for(int i=0;i<n;i++){// put array element in different bucket
        int bi;
        bi=n*a[i];
        b[bi].push_back(a[i]);
     }
     for(int i=0;i<n;i++){
        sort(b[i].begin(),b[i].end());   //sort individual bucket
     }
    // concatenation
    int index=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<b[i].size();j++){
            a[index++]=b[i][j];
        }
    }
    return 0;
}
