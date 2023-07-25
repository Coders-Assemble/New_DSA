# include<iostream>
using namespace std;
    
    class stack{
    public:
    int size;
    int *arr;
    int top1;
    int top2;

    stack(int size){
        arr= new int [size];
        this->size=size;
        top1= -1;
        top2= size;
    }


    //  functions


    void push1(int data){
        if(top2 -top1 == 1){
            //space not available
            cout<<"overflow";
        }
        else{
            //space available
            top1++;
            arr[top1]=data;
        }

    }
    void pop1(){
        if(top1==-1){
            //stack is empty
            cout<<"underflow in stack 1"<<endl;
        }
        else{
            //stack not empty
            top1--;
        }

    }
    void push2(int data){
        if(top2 -top1 == 1){
            //space not available
            cout<<"overflow";
        }
        else{
            //space available
            top2--;
            arr[top2]=data;
        }
        }
    void pop2(){
        if(top2==size){
            //stack is empty
            cout<<"underflow in stack 2"<<endl;
        }
        else{
            //stack not empty
            top2++;
        }
        
}

   void print(){
            cout<<endl;
            cout<<"top1"<<top1<<endl;
            cout<<"top2"<<top2<<endl;
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            // cout<<endl;
        }

int main(){
        stack s(10);

        s.push1(10);
        s.print();
        s.push1(20);
        s.print();
        s.push1(30);
        s.print();
        s.push1(40);
        s.print();
        s.push1(50);
        s.print();
        s.push1(60);
        s.print();
    return 0;
}};