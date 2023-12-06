#include<iostream>
using namespace std;
string countAndSay(int n) {
if(n == 1) {
return "1";
}
string ans = "";
string smallAns = countAndSay(n-1);
for(int i = 0; i < smallAns.size();) {
int count = 1;
int j = i+1;
while(j < smallAns.size() && smallAns[i] == smallAns[j])
{
j++;
count++;
}
ans = ans + to_string(count) + smallAns[i];
i = j;
}
return ans;}

int main(){//Q 3
            int n;
            cout<<"Enter a number : ";
            cin>>n;
            cout<<countAndSay(n);





}