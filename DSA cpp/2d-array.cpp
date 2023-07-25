# include<iostream>
#include<limits.h>

using namespace std;
// void prinrowwisesum( int arr[][3], int row, int col){
// cout<<" printing the row wise sum : ";
// int sum=0;
// for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//         sum=sum+arr[i][j];
//     }
//     cout<<endl<<sum<<endl;
// }
int getmax( int arr[][3], int row, int col){
// cout<<" printing the row wise sum : ";
int maxi=INT_MIN;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        if(arr[i][j]>maxi);{
            maxi=arr[i][j];
        }
    }
    // cout<<endl<<maxi<<endl;
}
return maxi;
}
int main(){
    int arr[3][3];
    int row= 3;
    int col= 3;
    for(int i=0 ;i<row; i++){
        for(int j=0; j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"printing roe=w which you have entered"<<endl;
    for(int i=0 ;i<row; i++){
        for(int j=0; j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<getmax(arr,row,col);
    return 0;
}