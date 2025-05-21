#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("LOVE"); //First in first out
    q.push("SQUID GAME");

    q.push("SQUID GAME 2");
    q.push("SQUID GAME 3");
 cout<<"Size before  pop is "<<q.size()<<endl;
 
 cout<<"First element "<<q.front()<<endl;

 q.pop();
 cout<<"After pop function";
 cout<<"First element "<<q.front()<<endl;

 cout<<"Size  after pop is "<<q.size()<<endl;
   return 0;
}