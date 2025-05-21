#include <iostream>
#include <queue>
using namespace std;

int main(){
    // max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int , vector<int> , greater<int>> mini;

    maxi.push(12);
    maxi.push(11);
    maxi.push(14);
    maxi.push(13);
    maxi.push(17);
    cout<<"Size is "<<maxi.size()<<endl;

    int n = maxi.size(); 
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" "<<endl;
        maxi.pop();
    }
    cout<<endl;


    mini.push(3);
    mini.push(7);
    mini.push(5);
    mini.push(10);
    mini.push(4);
    cout<<"Size is "<<mini.size()<<endl;

    int m = mini.size(); 
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" "<<endl;
        mini.pop();
    }
    cout<<endl;
cout<<"Empty or not "<<mini.empty();//this returns true and we poped all elements from queue 
   return 0;
}