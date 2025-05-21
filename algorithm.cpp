#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v  ;

    v.push_back(1);
    v.push_back(3);
    v.push_back(8);
    v.push_back(6);

    // cout<<binary_search(v.begin() , v.end(), 5);
    cout<<binary_search(v.begin() , v.end(), 6);

    cout<<"Lower bound "<<lower_bound(v.begin() , v.end(), 6)-v.begin()<<endl;
    cout<<"upper bound "<<upper_bound(v.begin() , v.end(), 6)-v.begin()<<endl;

    int a = 10 ;
    int b = 20 ;

    cout<<"Max is "<<max(a , b)<<endl;
    cout<<"Min is "<<min(a , b)<<endl;

    swap(a,b );
    cout<<"A is "<<a <<endl;

    string abcd ="ABCDE"; 
    reverse(abcd.begin(), abcd.end());
    cout<<"Reverse of abcd is "<<abcd<<endl;
///rotate start      mid            end 
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate"<<endl;
    for(int i :v){
        cout<<i<<endl;
    }

    sort(v.begin(),v.end());
    cout<<"After sorting ";
     for(int i :v){
        cout<<i<<endl;
    } 
   return 0;
}