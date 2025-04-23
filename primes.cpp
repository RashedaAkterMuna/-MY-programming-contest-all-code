#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
if(n<=1){
return false;
}
for(int i=2;i<=sqrt(n);i++){
if(n%i==0)
{
  return false;  
}
}
return true;
}
int main(){
int result;
cin>>result;
if(isprime(result-2)){
  cout<<2<<" "<< result-2<<endl;  
}
else{
    cout<<-1<<endl;
}
    return 0;
}