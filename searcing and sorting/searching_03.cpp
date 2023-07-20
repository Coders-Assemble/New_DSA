// #include <iostream>
// #include <vector>

// using namespace std;

// // nearly sorted array<<<<<<<<<<<<

// int binarySearchForElement(vector<int>& arr, int target) {
//     int start = 0;
//     int end = arr.size() - 1;
    
//     while (start <= end) {
//         int mid = start + (end - start) / 2;
        
//         if (arr[mid] == target) {
//             return mid;
//         }
        
//         if (arr[mid - 1]>=0 && arr[mid - 1] == target) {
//             return mid - 1;
//         }
        
//         if (arr[mid + 1] && arr[mid + 1] == target) {
//             return mid + 1;
//         }
        
//         if (arr[mid] < target) {
//             start = mid + 2;  // Adjust the start index if target is greater than mid
//         } else {
//             end = mid - 2;  // Adjust the end index if target is less than mid
//         }
//     }
    
//     return -1;
// }

// int main() {
//     vector<int> arr{10, 3, 40, 20, 50, 80, 70};
//     int target = 3;

//     int ans = binarySearchForElement(arr, target);
//     cout << "Position of the element: " << ans << endl;
    
//     return 0;
// }


// divide two number by binery search

# include<iostream>

using namespace std;

int finddivisor(int dividend,int divisor){
    int s=0;
    int e=dividend;
    int mid= s+(e-s)/2;
    int ans =88;

    while (s<=e)
    {
        if(mid*divisor==dividend)
        return mid;
        if(mid*divisor>dividend)
        e=mid-1;
        else{

            // save ans
            ans =mid;

            // update the search spece towards right
            s=mid+1;
        }
    mid= s+(e-s)/2;
    }
    return ans; 
}

int main(){
    int dividend=22;
    int divisor=7;

    int ans = finddivisor(dividend,divisor);
    cout<<"divisor is :"<<ans<<endl;
    return 0;
}