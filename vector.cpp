#include <iostream>
#include <vector>

// #include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v ; //creates an empty container 

    // v.push_back(1);//{1}
    // v.emplace_back(2);//{1,2}

    vector<pair<int , int >> vec ;

    vec.push_back({1 , 2} );
    vec.emplace_back(1 , 2);
// for (int i = 0; i < vec.size(); i++)
// {
//     cout<<"(" <<vec[i].first <<"," <<vec[i].second<<")" <<endl;
// }
for (const auto &p : vec) {
    cout << "(" << p.first << ", " << p.second << ")" << endl;
}

            //size //value
// vector<int> v( 5 ,    100);//{100 ,100 ,100 ,100, 100}
vector<int> v= {12, 43 , 67 , 23};
 for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
vector<int>:: iterator it = v.begin();
v.erase(v.begin() +1);
//  for (int i = 0; i < v.size(); i++)
// {
//     cout<<v[i]<<endl;
// }
for (auto it : v )
{
    cout<<it<<" "<<endl;
}

//insertion 
v.insert(v.begin() , 300);
for (auto it : v )
{
    cout<<it<<" "<<endl;
}
   return 0;
}