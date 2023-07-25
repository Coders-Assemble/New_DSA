# include<iostream>
# include<vector>
using namespace std;

int main(){
    vector<int>v{10,1,7,6,14,9};
    int n=v.size();
    // for first element
    for(int i=1;i<n; i++){
        // for next two element
        for(int j=0; j<n-i; j++){
            if(v[j]>v[j+1]){
                // swap them if they are matching condition
                swap(v[j],v[j+1]);
            }
        }
        // printing
        for(int i=0; i<n; i++){
        cout<<v[i]<<" "<<endl;
    }cout<<endl;
    }
    return 0;
}