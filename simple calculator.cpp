#include <iostream>
using namespace std;
int main(){
  int n1;
  cout<<"enter 1st number : ";
  cin>>n1;
  char op;
  cout<<"enter operator : ";
  cin>>op;
  int n2;
  cout<<"enter 2nd number : ";
  cin>>n2;
  switch(op){
    case'+':
    cout<<n1+n2<<endl;
    break;
    case'-':
    cout<<n1-n2<<endl;
    break;
    case'*':
    cout<<n1*n2<<endl;
    break;
    case'/':
    cout<<n1/n2<<endl;
    break;
    default:
    cout<<"invalid operator"<<endl;
  }
}
  

  
  
 
