# include<iostream>

using namespace std;

void changeadd(int&p){

        p=p+10;

    }


void solve(int** xyz){

    // //  **xyz=*xyz+1;           //<<<gives you error
    **xyz=**xyz+1;
     *xyz=*xyz+1;
     xyz=xyz+1;
}

void byrefernce(int& num){
    num=30;    
}

void byrefernce_2(int* hello){
    *hello=*hello +1;
    }
int main(){
    // int a=5;
    // int* p=&a;
    // int** q=&p;
    // cout<<p<<endl;
    // cout<<&a<<endl;

// using the function change in address
    
    // int a=5;
    
    // int* p=&a;


    // cout<<"before"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // changeadd(a);

    // cout<<"after"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

//////doing various functions in that changing the value of the input first iteger


    // int a=5;
    
    // int* p=&a;
    // int** q=&p;

    // solve(q);

    // cout<<a<<endl;


    // pass by reference<<<<<<<<<

    // int a=22;
    // byrefernce(a);
    // cout<<a<<endl;
    // cout<<a<<endl;

    int a=200;
    byrefernce_2(&a);


    cout<<a<<endl;
    cout<<a<<endl;
    return 0;
}