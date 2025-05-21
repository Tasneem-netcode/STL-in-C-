#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int , string> m ;
    m[1] = "Babban   ";
    m[13] = "haaris   ";
    m[2] = "alika ";
//another way to insert 
   m.insert({5 , "tasneem"});

   cout<<"Before erase "<<endl;
    for(auto i : m ){
        cout<<i.first<<endl;
        cout<<i.second<<endl;
    }

    cout<<"Finding 13 ->"<<m.count(13)<<endl;
m.erase(13);
    cout<<"After erase "<<endl;
      for(auto i : m ){
        cout<<i.first<<endl;
        // cout<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
   return 0; 
}