# include<iostream>
# include<deque>

using namespace std;

int solve(int arr[], int k ,int n){
    deque<int>q;

    // process first window of size
    for(int i=0; i<k;i++){
        if(arr[i]<0){
            q.push_back(i);
        }
    }
    // ewmaining window ko process karna
    for(int i=k; i<n; i++){
        // answer dedo purani queue ka
        if(q.empty()){
            cout<<0<<" "<<endl;
        }
        else{
            cout<<arr[q.front()]<<" ";
        }

        // out of window element ko remove
        while((!q.empty()) && (i-q.front())>=k){
            q.pop_front();
        }

        // check current element for the insersiion
        if(arr[i]<0)
        q.push_back(i);
    }

    if(q.empty()){
            cout<<0<<" "<<endl;
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
}

int main(){
    
    int arr[] ={12,-1,-7,8,-15,30,16,28};
    int size=8;
    int k=3;

    int ans=solve(arr,k ,size);
 cout<<ans;
    return 0;
}