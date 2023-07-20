// # include<iostream>

// using namespace std;

// int binarysearch(int arr[],int size,int target){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;

//     while(start <= end){
//         int element=arr[mid];

//         if(element == target){
//             return mid;
//         }
//         if (target < element){
//             // left me search
//             end=mid-1;
//         }
//         else{
//             // right me search
//             start=mid+1;
//         }
//         mid=( start + end)/2;
//     }
//     return -1;
// }


// int main(){
    
//     // finding the target element
//     int arr[7]={2,4,6,8,10,12,16};
//     int target=4;
//     int size=7;

//     int findelement = binarysearch(arr,size,target);

//     if(findelement == -1){
//         cout<<"element not found ";
//     }
//     else{
//         cout<<"element index is :"<<findelement<<endl;
//     }
//     return 0;
// }


// finding first occurence<<<<<
// # include<iostream>
// # include<vector>

// using namespace std;

// int findfirstocc(vector<int>v,int target){
//     int start=0;
//     int end=v.size()-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;

//     while(start<=end){
//         if (v[mid]==target){
//             // ans store
//             ans=v[mid];
//             // left me search
//             end=mid-1;
//         }
//         else if(target<v[mid]){
//         //    left me search
//             end=mid-1;

//         }
//         else{
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }

// int main(){

//     vector<int>v{1,3,3,3,4,4,4,6,7};
//     int target=60;
    
//     int firstocc=findfirstocc(v,target);

//     if(int ans =-1){
//         cout<<"ans not found"<<endl;
//     }
//     else{
//     cout<<"ans is the "<<firstocc<<endl;
//     }
    
//     return 0;
// }


// finding last occurence<<<<<<
// # include<iostream>
// # include<vector>

// using namespace std;

// int findlastocc(vector<int>v,int target){
//     int start=0;
//     int end=v.size()-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;

//     while(start<=end){
//         if(target=v[mid]){
//             // store ans
//             ans=mid;
//             // right me search
//             start=mid+1;
//         }
//         else if(target<v[mid]){
//             end=end-1;

//         }
//         else{
//             start=start+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }
//  int main(){
    
//     vector<int>v{1,2,3,4,4,4,5,6,7,8};
//     int target =4;

//     int lastocc=findlastocc(v,target);
//     cout<<"last occ is the :"<<lastocc;
//     return 0;
//  }


// total occurence<<
// last occurence -first occrence<<<<<<<<<<
 
//  last occurence
// # include<iostream>
// # include<vector>

// using namespace std;
// int findlastocc(vector<int>v,int target){
//     int start=0;
//     int end=v.size()-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;

//     while(start<=end){
//         if(target=v[mid]){
//             // store ans
//             ans=mid;
//             // right me search
//             start=mid+1;
//         }
//         else if(target<v[mid]){
//             end=end-1;

//         }
//         else{
//             start=start+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }
// int findfirstocc(vector<int>v,int target){
//     int start=0;
//     int end=v.size()-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;

//     while(start<=end){
//         if (v[mid]==target){
//             // ans store
//             ans=v[mid];
//             // left me search
//             end=mid-1;
//         }
//         else if(target<v[mid]){
//         //    left me search
//             end=mid-1;

//         }
//         else{
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }

// // first occuremce
 
 
//  int main(){
    
//     vector<int>v{1,2,3,4,4,4,5,6,7,8};
//     int target =4;
//     int lastocc=findlastocc(v,target);
//     cout<<"last occ is the :"<<lastocc<<endl;
//     int firstocc=findfirstocc(v,target);
//     cout<<"last occ is the :"<<firstocc<<endl;

//     cout<<"all occurences will be : "<<lastocc-firstocc+1<<endl;
//     return 0;
//  }


// smallest missing number<<<
// from leatcode
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s=0;
//         int e=arr.size()-1;
//         int mid=s+(e-s)/2;

//         while(s<e){
//             if(arr[mid]<arr[mid+1]){
//                 // right me search
//                 s=mid+1;
//             }
//             else{
//                 e=mid;
//             }
//             mid=s+(e-s)/2;
//         }
//         return s;
//     }
// };