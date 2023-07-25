  # include<iostream>
#include <stack>
using namespace std;

void insertatbottom(stack<int>& s,int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;
    }
    int topelement=s.top();
    s.pop();

    // rec call
    insertatbottom(s,target);
    // bt
    s.push(topelement);

}

void reversestack(stack<int>& s){

    // base case
    if(s.empty()){
        return;
    }
    // nahi pata
    int target =s.top();
    s.pop();
    // recursive call
    reversestack(s);
    // target ko insert at bottom kardo
    insertatbottom(s, target);



}

int main(){

    // string str ="harsh";
    // stack<char> s;
    // for(int i=0;i<str.length();i++){
    //     s.push(str[i]);
    // }
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop(); 
    // }
    // cout<<endl;

    // insert at the bottom::::::::
 
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    // if(s.empty()){
        
    //     cout<<"stack is empty"<<endl;

    // } 
    // int target=s.top();
    // s.pop();
    // insertatbottom(s,target);
    reversestack(s);

    cout<<"print"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    };



    return 0;
}




