# include<iostream>
// # include<stack>


using namespace std;
class stack{
public:
int *arr;
int size;
int top;

public:
// constructure
stack(int size){
    arr =new int[size];
    this->size=size;
    top=-1;

}

// functions

void push(int data){
    if(size-top>1){
    //space available
    //insert
    top++;
    arr[top]=data;
    }
    else{
        //space not available
        cout<<" stack overflow...";
        cout<<endl;

    }
}

void pop(){
    if(top == -1){
        // stack is empty
        cout<<"stack underflow and not avle to pop...";
        cout<<endl;

    }
    else{
        //stack is not empty
        top--;
    }    

}
int gettop(){
    if(top == -1){
        cout<<"there no elwment in the stack "<<endl;
    }
    else{
        return arr[top];
    }
}

int getsize(){
    return top+1;

}

bool isempty(){
    if(top==-1){
    return true;
    }
    else{
        return false;
    }
}

};

 
int main(){
    // stack creation
    stack s(10);
    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.isempty()){
        cout<<s.gettop()<< " "<<endl;
        s.pop();
    }
    // cout<<endl;
    cout<<"size of stack "<<s.getsize()<<endl;   
    return 0;
    s.pop();
}