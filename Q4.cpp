#include<iostream>
using namespace std;
void printsum(int arr[],int n){
    //base case
    if(n == 0) return;
    //Work
    for(int i =0;i<n;i++) {cout<<arr[i]<<" ";
        if(i != n-1) arr[i]+=arr[i+1];}
    cout<<endl;
    //Recursive call
    printsum(arr,n-1);
}
int main(){int n;
cout<<"Enter size of array : ";
cin>>n;
int arr[n];
cout<<"Enter elements of array : ";
for(int i =0;i<n;i++) cin>>arr[i];
printsum(arr,n);



}


