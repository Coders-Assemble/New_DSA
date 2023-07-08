#include <iostream>

using namespace std;

void solve(int *p){

    // *Ptr = *p + 10;
}

int main()
{
    // int arr[4]={21,23,34,45};
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<arr[3]<<endl<<endl;

    // int *p=arr;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // character array
    // char ch[10]="babbar";
    // char*c = ch;
    // cout<<ch[2]<<endl;
    // cout<<endl;

    // char name[10]="sherbano";
    // char* c= name;
    // cout<<name<<endl;
    // cout<<*name+1<<endl;
    // cout<<c+1<<endl;
    // cout<<c+3<<endl;
    // cout<<*c<<endl;
    // cout<<&c<<endl;

    int a = 5;
    int *ptr = &a;
    solve(ptr);
    cout << a;

    return 0;
}