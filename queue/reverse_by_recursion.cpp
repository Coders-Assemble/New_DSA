# include<iostream>
# include<queue>

using namespace std;

void reversequerecursion( queue<int> &q){
    // base case
    if(q.empty())
        return;
    
    // step 1
    int temp=q.front();
    q.pop();

    // step 2
    reversequerecursion(q);

    q.push(temp);

}

int main(){
    
        queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reversequerecursion(q);

    // printing reversed queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}