// // searching examples

// # include<iostream>
// # include<vector>

// using namespace std;

// int pivotelement(vector<int>arr){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;

//     while(s<=e){
//         if(arr[mid]>arr[mid+1])
//         return mid;
//     if(arr[mid-1]>arr[mid])
//         return mid-1;

//         if(arr[s]>=arr[mid])
//         return e=mid-1;
//         else
//             s=mid+1;
            
//     mid=s+(e-s)/2;
//     }
//     return -1;
// }

// int main(){
    
//     vector<int>v{3,4,5,6,7,8,9,10,1,2};
//     int ans=pivotelement(v);

//     cout<<"pivot element is the :"<<v[ans]<<endl;

//     return 0;
// }

// # include<iostream>
// #include<vector>

// using namespace std;
// int pivotelement(vector<int>arr){
//     int s=0;
//     int e=arr.size()-1;
//     int mid =s+(e-s)/2;


//     while(s<=e){
//         if(mid+1<arr.size() && arr[mid]>arr[mid+1])
//         return mid;
//         if(mid-1>=0 && arr[mid-1]>arr[mid])
//         return mid-1;

//         if(arr[s]>=arr[mid])
//          e=mid-1;
//         else
//        s=mid+1;
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }

// int main(){
    
//     vector<int>v{1,2,3,4,5,6,7,3,4,5};
//     int ans=pivotelement(v);
//     cout<<v[ans]<<endl;

//     return 0;
// }


// finding squreroot<<<<<<<<<
# include<iostream>

using namespace std;

int squrt(int n){
    int s=0;
    int target=n;
    int e=n;
    int mid=s+(e-s)/2;
    int ans =-1;

    while(s<=e){
        if(mid*mid==target)
            return mid;
        if(mid*mid>target){
        e=mid-1;}
        else{
        ans=mid; 
        s=mid+1;
        }
        mid=s+(e-s)/2;
    }
return ans;

}

int main(){
    int n;
    cout<<"enter the value for squre root"<<endl;
    cin>>n;

    int ans = squrt(n);

    // cout<<"ans is : "<<ans;

    int precision;
    cout<<"enter floating number :"<<endl;
    cin>>precision;
    
    double step=0.1;
    double finalans=ans;
    for(int i=0;i<precision; i++){

        for(double j=finalans; j*j<=n; j=j+step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<"final ans is the "<<finalans<<endl;
    return 0;
}