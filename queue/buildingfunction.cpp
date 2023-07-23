# include<iostream>

using namespace std;

class queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    queue(int size){
        this->size =size;
        arr=new int[size];
        front=0;
        rear=0;
    }
    void push(int data){
        if(rear==size){
            cout<<"q is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop(){
        if(front==rear){
            cout<<"q is empty "<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }  
    }

    int getfront(){
        if (front==rear){
            cout<<"q is empty";
            return -1;
        }
        else{
                return arr[front];
        }
    }
    bool empty(){
        if(front==rear){
        return true;
        }
        else{
        return false;
        }
    }

        int getsize(){
            return rear-front;
        }
};
int main(){

    queue q(10);

    q.push(10);
    q.push(10);
    q.push(10);
    q.push(50);
    q.push(60);

    q.pop();
    q.pop();
    q.pop();
    q.pop();
 
cout<<"size of the queue is :"<<q.getsize()<<endl;
cout<<"empty or not the queue is :"<<q.empty()<<endl;
cout<<"empty or not the queue is :"<<q.getfront()<<endl;
    return 0;
}