# include<iostream>
# include<queue>
# include<stack>

using namespace std;

void interleaving(queue<int> &q){
    int n=q.size();
    if(q.empty()){
        return;
    }
    int k=n/2;
    int count=0;
    queue<int>q2;

    while(!q.empty()){
        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count==k){
            break;
        }

    }

    while(!q2.empty() && !q.empty()){
        int first=q2.front();
        q2.pop();
        q.push(first);

        int second=q.front();
        q.pop();
        q.push(second);
    }

}

int main(){
    queue<int> q;
    // int k;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    interleaving(q);

    // printing reversed queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
