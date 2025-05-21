#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> sk;

    sk.push("Haaris ");
    sk.push("Alika ");
    sk.push("ammie ");//top elemnt 

    cout<<"Top Element "<<sk.top()<<endl;

    sk.pop();
    cout<<"top element "<<sk.top()<<endl;

    cout<<"Size of stack is "<<sk.size()<<endl;

    cout<<"Empty or not "<<sk.empty()<<endl;

   return 0;
}