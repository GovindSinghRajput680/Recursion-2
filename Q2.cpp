#include<iostream>
using namespace std;
void print(int arr[],int n,int x){
    if(n == 0|| arr[n-1] == x) {
            cout<<n-1;
            return;}
    print(arr,n-1,x);


}
int main(){int n;
cout<<"Enter number of elements in the array : ";
cin>>n;
int arr[n];
cout<<"Enter elements in the array : ";
for(int i =0;i<n;i++) cin>>arr[i];
int target;
cout<<"Enter the target number : ";
cin>>target;
cout<<"Index of taregt is ";
print(arr,n,target);

}