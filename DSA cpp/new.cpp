# include<iostream>
#include<limits.h>


using namespace std;
bool find(int arr[] , int size , int key ){
    for(int i=0; i<size; i++){
        if(arr[i] == key)
        return true;

    }
     
    return false;
}
int main(){
    // int arr[5]={2,4,6,8,5};
    // int size=5;
    // cout<<"enter the key : ";
    // int key;
    // cin>>key;
    // if(find(arr, size,key)){
    //     cout<<"found"<<endl;

    // }
    // else{
    //     cout<<"not found"<<endl;

    // }



    // int arr[10]={1,2,3,4,5,6,7,8,9,56};
    // int size=10;
    // cout<<"enter the key :  ";
    // int key;
    // cin>>key;
    // if(find(arr,size,key)){
    //     cout<<"found";

    // }
    // else{
    //     cout<<"not found";
    // }
    // return 0;
    // int arr[]= {1,0,0,0,0,1,0,1,0,1,0,1,0,1,0};

    // int size=15;
    // int numzero=0;
    // int numone=0;
    // for( int i=0; i<size; i++){
    //     if(arr[i] == 0){
    //         numzero++;
    //     }
    //     if(arr[i]==1){
    //         numone++;
    //     }
    // }
    // cout<<"number of the 0 :"<<numzero<<endl;
    // cout<<"number of the 1 :"<<numone<<endl;


//  int arr[10]= {2,45,67,46,78,80,70};
//  int size=10;
// int maxi= INT_MIN;
// for(int i=0 ; i<size; i++ )

// {
//     if( arr[i]>maxi){
//         maxi=arr[i];
//     }
// }
// cout<<"maximum number is :"<<maxi<<endl;

// minimum number

//   int arr[7]= {78,45,67,46,78,80,70};
//   int size=7;
//   int mini=INT_MAX;
//   for(int i=0; i<size; i++){
//     if(arr[i]<mini){
//         mini=arr[i];

//     }
//   }
//   cout<<"minimum number is : "<<mini;

// int arr[]={1,2,3,4,5,6,7,8,9};
// int size= 10;
// int start= 0;
// int end= size-1;
// while(true){
//     if(start>end)
//     break;
//     cout<<arr[start];
//     cout<<arr[end];
//     // cout<<start<<endl;
//     // cout<<start<<endl;
//     start++;
//     end--;


// }

int n;
cin>>n;
vector<int>arr(n);
}