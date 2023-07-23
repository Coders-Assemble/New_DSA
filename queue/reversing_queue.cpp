# include<iostream>
# include<queue>
# include<stack>
using namespace std;

int reverseque(queue<int> &q){
    stack<int>s;


// put all element to the stack
    while(!q.empty()){
        int element= q.front();
        q.pop();

        s.push(element);
    }
// put all elemet to the queue
    while(!s.empty()){
        int element= s.top();
        s.pop();

        q.push(element);
    }
// cout<<endl;
};

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseque(q);

    // printing reversed queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}