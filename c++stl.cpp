#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq ;
    pq.push(3 );
    pq.push(8);
    pq.push(45);
    pq.push(22 );//{45 ,22 ,8 ,3}
 cout<<pq.top ()<<endl;//45
 pq.pop();
 cout<<pq.top()<<endl; //22

 //minimum heap :
 priority_queue<int ,vector<int> , greater<int>> pm;
 pm.push(5);
 pm.push(13);
 pm.push(2);
 pm.push(45);

 cout<<pm.top()<<endl;
   return 0;
}