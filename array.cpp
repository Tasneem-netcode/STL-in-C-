#include <iostream>
#include <array>
using namespace std;

int main(){
    int basic[3] ={1,2,3 }; //normal basic array

    array<int , 4> a ={1,2,3,4} ;//array in stl 

    int size = a.size();
    cout<<size<<endl;//print size of array 

    for (int i = 0; i <size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd indes is :"<<a.at(2)<<endl;

    cout<<"Empty or not "<<a.empty()<<endl; 

    
     cout<<"First element  "<<a.front()<<endl; 
    cout<<"last element  "<<a.back()<<endl; 
   return 0;
}
