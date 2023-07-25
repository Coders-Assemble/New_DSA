#include <iostream>
#include <vector>

using namespace std;

// int findelement(vector<int>arr){
//     int ans=0;
//     for(int i=0; i<arr.size(); i++){
// ans=ans^arr[i];
//     }
//     return ans;
// }
// int findingodd (vector<int>brr)
// {
//     int ans = 0;
//     for(int i=0; i<brr.size(); i++ ){
//         ans=ans^brr[i];
//     }
//     return ans;

// }
int main()
{
    //     vector<int>arr;
    //     vector<char>harsh;

    //     // depends on compiler<<<<<<<??????????>>>>>>>>>

    //     // int ans = (sizeof(arr)/sizeof(char));
    //     // cout<<ans<<endl;

    //     cout<<harsh.size()<<endl;
    //     cout<<arr.size()<<endl;
    //     cout<<arr.capacity()<<endl;
    //     arr.push_back(10);
    //     arr.push_back(90);
    //     arr.push_back(50);
    //     arr.push_back(150);
    //     arr.push_back(160);
    //     arr.push_back(40);
    //     arr.push_back(560);
    //     for(int i =0; i<arr.size(); i++){
    //         cout<<arr[i]<<" ";
    //     }cout<<endl;
    //     arr.pop_back();
    //     arr.pop_back() ;
    //     arr.pop_back();
    // for(int i =0; i<arr.size(); i++){
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;

    //      int n;
    //      cout<<"enter the value of array : "<<endl;
    //      cin>>n;
    //     vector<int> brr(n,89);
    //     cout<<"size of b is :"<<brr.size()<<endl;
    //     cout<<"size of b is :"<<brr.capacity()<<endl;
    //  for(int i =0; i<brr.size(); i++){
    //         cout<<brr[i]<<" ";
    //     }
    // cout<<endl;
    // vector<int>crr{34,3433,556,7,67,78,4};
    // crr.pop_back();
    // for(int i =0; i<crr.size(); i++){
    //         cout<<crr[i]<<" ";
    //     }
    // cout<<endl;

    //     cout<<"is the crr is empty or not : "<<crr.empty()<<endl;
    //     vector<char>drr;
    //     drr.empty();
    //     cout<<"is the crr is empty or not : "<<drr.empty()<<endl;
    // int n;
    // cout<<"the size of array : ";
    // cin>>n;
    // vector<int>arr(n);
    // cout<<"enter the elements of of choosen array : ";
    // for(int i=0; i<arr.size(); i++){
    //     cin>>arr[i];
    // }
    // int quniqueElement= findelement(arr);
    // cout<<"unique element is : "<<quniqueElement<<endl;

    //     return 0;
    // int n;
    // cout<<"array size : ";
    // cin>>n;
    // vector<int>brr(n);
    // cout<<"enter the elements : ";
    // for(int i=0; i<brr.size(); i++){
    // cin>>brr[i];
    // }
    // int oddnumber= findingodd(brr);
    // cout<<" odd number from given input :: " <<oddnumber<<endl;
    // int arr[]={1,7,9};
    // int sizea = 5;
    // int brr[] = {2,4,6};
    // int sizeb = 3;
    // vector<int> ans;
    // for(int i=0; i<sizea; i++){
    //     ans.push_back(arr[i]);
    // }
    // for(int i=0; i<sizeb; i++){
    //     ans.push_back(brr[i]);
    // }
    // for(int i=0 ; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }
    // vector<int> arr{10, 2, 3, 4, 5};
    // vector<int> brr{1, 4};
    // vector<int> ans;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     // int element = arr[i];
    //     for (int j = 0; j < brr.size(); j++)
    //     {
    //         if (arr[i] == brr[j])
    //         {
    //             ans.push_back(arr[i]);
    //         }
    //     }
    // }
    // for (auto value : ans)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;
    // vector<int> arr{10, 2, 3, 4, 5};
    // vector<int> brr{1, 4};
    // vector<int> ans;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int element = arr[i];
    //     for (int j = 0; j < brr.size(); j++)
    //     {
    //         if (element == brr[j])
    //         {
    //             ans.push_back(element);
    //         }
    //     }
    // }
    // for (auto value : ans)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;
    // pair of elements which are the sum of<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>
    // vector<int>arr{1,2,3,4,5,6,7,8};
    // int sum =10;
    // for(int i=0; i<arr.size(); i++){
    //     for(int j=i+1; j<arr.size(); j++ ){
    //         if(arr[i] + arr[j]== sum ){
    //             cout<<"pair found "<<arr[i]<<", "<<arr[j]<<endl;

    //         }
    //     }
    // }
    //

    // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>
    //  three numbers
    // vector<int>arr{1,2,3,4,5,6,7,8,9};
    // int sum= 10;
    // for(int i=0; i<arr.size(); i++){
    //     int element1= arr[i];
    //     for(int j=i+1; j<arr.size(); j++){
    //         int element2 = arr[j];
    //     for(int k=j+1; k<arr.size(); k++){
    //         int element3 = arr[k];
    //         if( element1+ element2+ element3==sum){
    //             cout<<element1<<","<<element2<<","<<element3<<endl;

    //     }
    // }
    // }}

    // four numbers

    // <<<<<<<<<<<<<<<<>>>>>>>>>>>>
    // vector<int>arr{1,2,3,4,5,6,7,8,9};
    // int sum= 10;
    // for(int i=0; i<arr.size(); i++){
    //     int element1= arr[i];
    //     for(int j=i+1; j<arr.size(); j++){
    //         int element2 = arr[j];
    //     for(int k=j+1; k<arr.size(); k++){
    //         int element3 = arr[k];
    //     for(int m=k+1; m<arr.size(); m++){
    //         int element4 = arr[m];
    //         if( element1+ element2+ element3+element4==sum){
    //             cout<<element1<<","<<element2<<","<<element3<<","<<element4<<endl;

    // }}}}}}

    // vector<int>arr{1,0,1,0,1};{
    //     int start= 0;
    //     int end= arr.size()-1;
    //     int i=0;
    //     while(i!= end){
    //         if(arr[i]== 0){
    //             swap(arr[start], arr[i]);
    //             start++;
    //             i++;

    //         }
    //         else{
    //             swap(arr[end], arr[i]);
    //             end--;
    //         }
    //     }
    // for (auto val : arr){
    //     cout<<val<<" ";
    // }
    // }

    vector<int> arr{1, 0, 1, 0, 1};
    {
        int start = 0;
        int end = arr.size() - 1;
        int i = 0;
        while (i != end)
        {
            if (arr[i] == 0)
            {
                swap(arr[i], arr[start]);
                start++;
                i++;
            }
            else
            {
                swap(arr[i], arr[end]);
                end--;
            }
        }
        for (auto val : arr)
        {
            cout << val << " ";
        }
    }
}