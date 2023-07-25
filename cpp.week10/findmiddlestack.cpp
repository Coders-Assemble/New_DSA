#include <iostream>
#include <stack>

using namespace std;

 // find middle element:

int findmiddle(stack<int> &st, int &totalsize)
{
    // base case
    if (st.size() == totalsize / 2 + 1)
    {
        cout << "the middle element is sthe : "<<st.top();
    }

    int temp = st.top();
    st.pop();

    // recursive call
    findmiddle(st, totalsize);

    // backtracking
    st.push(temp);
}

int main()
{
    stack<int> st;


    st.push(10);
    st.push(1043);
    st.push(1023);
    st.push(1021);
    st.push(103);

    int totalsize = st.size();
    findmiddle(st, totalsize);

    // cout << "elementon top " << st.top();
    return 0;


    return 0;
}