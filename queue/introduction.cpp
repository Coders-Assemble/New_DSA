# include<iostream>
# include<queue>

using namespace std;

int main(){
queue<int>q;

q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
q.push(70);

cout<<"size of queue is the :"<<q.size()<<endl;
q.pop();

cout<<"size of queue is the :"<<q.size()<<endl;

if(q.empty()){
    cout<<"queue is empty";
}
else{
    cout<<"not empty ";
}

    return 0;
}