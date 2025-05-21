#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(12);
    d.push_front(11);

    for (int i :d ){
        cout<<i<<" ";
    }

    // d.pop_back();
    // cout<<"After pop at back "<<endl;
    // for (int i : d ){
    //     cout<<i<<" ";
    // }
    // d.pop_front();
    // cout<<"After pop at front  "<<endl;
    // for (int i : d ){
    //     cout<<i<<" ";
    // }
    
    cout<<"Print first index element "<<d.at(1)<<endl;
    
    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;


    cout<<" Empty or not "<<d.empty()<<endl;


    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin() +1);
    cout<<"after  erase "<<d.size()<<endl;

   return 0;
}