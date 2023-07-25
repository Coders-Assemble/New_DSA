# include<iostream>
# include<stack>
using namespace std;

    void printmiddle(stack<int> &s, int &totalsize){
        //base case
        if(s.size()==totalsize/2 + 1){
        cout<<"middle element is  = "<<s.top()<<endl;
            return;

        }
        int temp = s.top();
        s.top();

        // recursive call
        printmiddle(s,totalsize);

        // backtracking
        s.push(temp);
    }


int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int totalsize = s.size();
    printmiddle(s,totalsize);
    while(!s.empty()){
        cout<<s.top()<< " "<<endl;
        s.pop();
    
    return 0;
}};