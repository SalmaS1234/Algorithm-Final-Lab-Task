#include<iostream>
#include<queue>
using namespace std;


int main(){

queue<int> q;
queue<string>nameQueue;

q.push(10);
q.push(20);
q.push(30);
nameQueue.push("s");
nameQueue.push("p");
nameQueue.push("d");


while(!q.empty()){

   cout<<q.front()<<endl;
   q.pop();
}
   cout<<endl;
   while(!nameQueue.empty()){
    cout<<nameQueue.front()<<endl;
    nameQueue.pop();

   }




}
