#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st ;
    int n ;
    cin>>n ;
    for (int  i = 1; i <=n; i++)
    {
        st.push(i);
        cout<<i<<endl;
    }
  
    
    
   return 0;
}