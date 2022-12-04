#include<iostream>
using namespace std;
#include<vector>
#include<stack>

int main(){

 stack<string> nameStack;

  nameStack.push("Salma");
  nameStack.push("Akter");
  nameStack.push("Sweety");

  while(!nameStack.empty()){
  cout<<nameStack.top()<<endl;
  nameStack.pop();

  }




}
