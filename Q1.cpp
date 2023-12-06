#include<iostream>
using namespace std;
//Q1
void print(int arr[],int size){
    if(size == 0) return;
    cout<<arr[size-1]<<" ";
    print(arr,size-1);

}
int main(){int n;
cout<<"Enter number of elements in the array : ";
cin>>n;
cout<<"Enter elements in the array : ";
int arr[n];
for(int i =0;i<n;i++) cin>>arr[i];
cout<<"Reversed elements are : ";
print(arr,n);


}