# include<iostream>

using namespace std;

class stack{
    public:
    int * arr;
    int size;
    int top1;
    int top2;

    // initialise
    stack(int size){
        arr = new int [size];
        this ->size=size;
        top1=-1;
        top2=size;

    }

    void push1(int data){
        if(top2-top1==1){
            //space not available
            cout<<"space not available"<<endl;
           
        }else{
            top1++;
            arr[top1]=data;
            
        }
    }
    void push2(int data){
        if(top2-top1==1){
            //space not available
            cout<<"space not available"<<endl;
           
        }else{
            top2--;
            arr[top2]=data;

        }
    }
    void pop1(int data){
        if(top1==-1){
            // no element available ton remove
            cout<<" no element available to remove"<<endl;
           
        }else{
            top1--;

        }
    }
    void pop2(int data){
        if(top2=size){
            //no element available to remove
            cout<<"no element available to remove"<<endl;
           
        }else{
            top2++;
        }
    }
    void print(){
        // cout<<endl;
        cout<<"top1"<<top1;
        cout<<endl;
        cout<<"top1"<<top2;
        cout<<endl;
        for(int i=0; i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;

    }


};

int main(){

    stack s(10);

    s.push1(100);
     // print the stack
    s.print();
    s.push1(100);
     // print the stack
    s.print();
    s.push1(100);
     // print the stack
    s.print();
    s.push1(100);
     // print the stack
    s.print();
    s.push1(100);
     // print the stack
    s.print();
    s.push1(100);
     // print the stack
    s.print();
    s.push1(100);
     // print the stack
    s.print();
    s.push1(100);
     // print the stack
    s.print();
   

    return 0;
}


