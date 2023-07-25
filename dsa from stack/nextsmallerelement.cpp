# include<iostream>
# include<stack>
# include<vector>
using namespace std;

int main(){
    vector<int>st;
    st.push_back(2);
    st.push_back(1);
    st.push_back(4);
    st.push_back(3);

    stack<int>stackk;
    stackk.push(-1);

    vector<int>ans(st.size());

    for(int i=st.size()-1; i>=0; i--){
        int curr =st[i];

        while(stackk.top()>=curr){
            stackk.pop();

        }
        
        // choota element mil gaya
        ans[i]= stackk.top();

        // push the element
        stackk.push(curr);
    }

    cout<<"printing the elements ";
    for(int i=0; i<st.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}