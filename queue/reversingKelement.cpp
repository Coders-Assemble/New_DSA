# include<iostream>
# include<queue>
# include<stack>

using namespace std;

void reverseKelement(queue<int> &q,int k ){

stack<int>s;
int count=0;
int n=q.size();
// int k;

while(!q.empty()){
    int temp=q.front();
    q.pop();
    s.push(temp);
    count++;

    if(count==k)
    break;
}
while(!s.empty()){
    int temp= s.top();
    s.pop();
    q.push(temp);
}
count=0;

while(!q.empty()){

int temp=q.front();
q.pop();
q.push(temp);
count++;

if(count==n-k)
break;
}
};

int main(){
    queue<int> q;
    // int k;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseKelement(q, 3);

    // printing reversed queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}