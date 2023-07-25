#include<iostream>
#include<stack>
using namespace std;

    void insertsorted(stack<int>s, int target){
        // base cse
        if(s.empty()){
            s.push();
            return;    
        }
        if (s.top()>=target){
            s.push(target);
            return;

        }
        int topelement =s.top();
        s.pop();
        insertsorted(s, target);


        // bt
        s.push(topelement);
    }

    void sortstack(stack<int>&s){
        // base case
        if(s.empty()){
            return;

        }
        int topelement=s.top();
        s.pop();

        sortstack(s);

        insertsorted(s,topelement);

    }


int main(){
  stack<int>s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(40);

    sortstack(s);

    cout << "Printing" << endl;
    while(!s.empty()) {     
    cout << s.top() << " ";
    s.pop();
    }

    return 0;
}