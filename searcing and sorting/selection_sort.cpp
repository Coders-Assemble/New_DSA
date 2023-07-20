# include<iostream>
# include<vector>

using namespace std;

int main(){
    vector<int>v{5,4,3,2,1};
    int n=v.size();

    // for first element
    for(int i=0;i<n-1;i++){
        int minindex=i;
        // for remaining all element
        for(int j=i+1; j<n; j++){
            if(v[j]<v[minindex]){
                // new minimum element then store
                minindex=j;
            }
        }
        swap(v[i],v[minindex]);
    }    
    // print
    for(int i=0; i<n; i++){
        cout<<v[i]<<" "<<endl;
    }cout<<endl;
    return 0;
}