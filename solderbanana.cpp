#include<iostream>
using namespace std;
int main(){
 long long int k,w,n,total=0;
 cin>>k>>n>>w;
 for(int i=1;i<=w;i++){
total+=i*k;
 }
 if(total>n)
 cout<<total-n<<endl;
 else{
    cout<<0;
 }
  return 0;  
}