#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s ;

    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(1);
    s.insert(9);
    s.insert(9);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6); 

    for (auto i : s)
    {
        cout<<i<<endl;
    }
    set<int> ::iterator it = s.begin();
    it++;
    s.erase(it);
     for (auto i : s)
    {
        cout<<i<<endl;
    }
    //count

    cout<<endl;
    cout<<"1 IS PRESENT OR NOT "<<s.count(1)<<endl;

    //Find
    set<int> :: iterator itr = s.find(1);
    for(auto it = itr ; it!=s.end(); it++ ){
    cout<<*itr<<endl;

    }
   return 0;
}