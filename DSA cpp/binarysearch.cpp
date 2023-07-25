# include<iostream>
# include<vector>
using namespace std;
// // int indexofelement(int brr[], int size, int target){
// //     int start=0;
// //     int end=size-1;
// //     int mid=(start+end)/2;
// //     while(start<=mid){
// //         int element=brr[mid];
// //             if (element==target){
// //                 return mid;
            
// //         }
// //         else if(target<element){
// //             end=mid-1;

// //         }
// //         else if(target>element){
// //             start=start+1;
// //         }
// //      mid=(start+end)/2;
// //     }
// //     return -1;
// // }

// //     // using binary search finding is this element is present or not i array
// //     // taking arr
// //     int arr[]= {2,4,6,8,10,12,14,16,18,19};
// //     // puting size
// //     int size= 10;
// //     // initialiizng target value
// //     int target=1111;
// //     // initializing an funcion for the get code 
// //     int indexoftarget=binarysearch(arr,size,target);
// //     // if the target value is not get
// //     // return -1 

// //     if(indexoftarget == -1){
// //         cout<<"target not found "<<endl;

// //     }
// //     // and if the target value is got then retunn the index of the target value 
// //     else{
// //         cout<<"target found at the index of "<<indexoftarget<<" of the array"<<endl;
// //     }

// //     return 0;


// // int indexofelement(int brr[], int size, int target){
// //     int start=0;
// //     int end=size-1;
// //     int mid=(start+end)/2;

// //     while(start<=end){
// //         int element=brr[mid];
// //         if(element==target){
// //             return mid;

// //         }
// //         else if(target<element){
// //             end=mid-1;
// //         }
// //         else if(target>element){
// //             start=mid+1;
// //         }
// //         mid=(start+end)/2;
// //     }
// //     return -1;

// // }

// // int brr[]={11,22,33,44,55,66,77,88,99,111,222,555,888,894};
// // int size= 14;
// // int target=894;
// // int gotelement=indexofelement(brr, size,target);
// // if (gotelement==-1){
// //     cout<<"element no found ";
// // }
// // else{
// //     cout<<"element foundat the index of "<<gotelement<<endl;
// // }

// // return 0;

// // int indexoffirstocc(int brr[], int size, int target){
// //     int start=0;
// //     int end=size-1;
// //     int mid=(start+end)/2;
// //     while(start<=mid){
// //         int element=brr[mid];
// //             if (element==target){
// //                 return mid;
            
// //         }
// //         else if(target<element){
// //             end=mid-1;

// //         }
// //         else if(target>element){
// //             start=start+1;
// //         }
// //      mid=(start+end)/2;
// //     }
// //     return -1;
// // }
// // // int brr[]={11,22,33,44,55,66,77,88,99,111,222,555,888,789};
// // vector<int> v{1,3,5,7,9,11,16,45,56,78,78,89,};
// // // int size= 14;
// // int target=78;
// // int gotelement=indexoffirstocc(v, target);
// // if (gotelement==-1){
// //     cout<<"element no found ";

// // }
// // else{
// //     cout<<"element foundat the index of "<<gotelement<<endl;
// // }


// // <<<<<<<<<<<<<<<<<<<<first occourancee of the nuumber>>>>>>>>>>>>>>>>>>>>>>

// int firstocc(vector<int> v, int target){
//     int s=0; 
//     int e=v.size()-1;
//     int mid;
//     int ans2=-1;
//     while(s<=e){
//         if(v[mid]==target){
//             ans2=mid;
//             e=mid-1;
//         }
//         else if(target<v[mid]){
//             e=mid-1;
//         }
//         else if(target>v[mid]){
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans2;

// }

// int lastocc(vector<int> v, int target){
//     int s=0; 
//     int e=v.size()-1;
//     int mid;
//     int ans1=-1;
//     while(s<=e){
//         if(v[mid]==target){
//             ans1=mid;
//             s=mid+1;
//         }
//         else if(target<v[mid]){
//             e=mid-1;
//         }
//         else if(target>v[mid]){
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans1;

// }

// // int main(){
// //     vector<int> v{1,5,7,9,9,10,10,10,10,10,10,10,10,11,13,15,17,17,19,19};
// //     int target= 9;
// //     int indexoftarget=lastocc(v, target);
// //     cout<<"ans is "<<indexoftarget<<endl;


// // return 0;
// // }       

// int main(){
//     vector<int> v{1,5,7,9,10,10,10,11,13,15,17,19};
//     int target= 10;
//     int indexoftarget2=lastocc(v, target);
//     int indexoftarget1=firstocc(v, target);
//     cout<<"ans is "<<indexoftarget2+1<<endl;
// return 0;
// }       


# include<iostream>

# include<vector>
using namespace std;
int findpeakele(vector<int>v){
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if (v[mid]<v[mid+1]){
            s=v[mid]+1;

        }
        else{
            e=v[mid];

        }
    int mid=s+(e-s)/2;
        
    }
    return s;


}
int main(){
    vector<int>v{1,61,22,44,33,5,6,7,8,9,10};
    int peakelement= findpeakele(v);
    return 0;
}