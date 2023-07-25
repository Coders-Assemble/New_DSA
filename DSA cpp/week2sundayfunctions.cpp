# include<iostream>

using namespace std;
// void printname(){
//     int a;
//     cin>>a;
//     for(int i=0; i<a; i++){
//         cout<<"dada";
//         cout<<endl;
//     }  
// }
// int add(int y,int z){
// int result=y+z;

// return result;
// }
// // cout<<"your max number is: ";

//  int findmax( int a,int b,int c){
//     if(a>>b && a>>c){
//         return a;
//     }
//     else if(b>>a && b>>c){
//         return b;
//     }
//     else{
//         return c;
//  }}
// char takemarks( int marks){
//     if( marks>=90)
//     return 'a';
//     else if (marks>=80)
//     return 'b';
//     else if (marks>=70)
//     return 'c';
//     else if (marks>=60)
//     return 'd';
//     else
//     return 'f';
    
// }
int getevensum(int a){
    int sum = 0;
    for (int i=2; i<=a; i=i+2){
        sum=sum+i;
    }
    return sum;
}
char inmarks(int a){
    if (a >= 90)
    return 'A';
    if (a >= 80)
    return 'B';
    if (a >= 70)
    return 'C';
    if (a >= 50)
    return 'D';
    else
    return 'F';

}


// printtwo numbers<<<<<<<<<<<<<<<<<>>>>>>>>>>
int main(){
    // int a;
    // cout<<"enter the number-1: ";
    // cin>>a;
    // int b;
    // cout<<"enter the number-2: ";
    // cin>>b;

    // int sum= add(a,b );
    // cout<<"addition of two numbers is: "<<sum<<endl;

    // // printname();
    // return 0;

// int a,b,c;
// cin>>a>>b>>c;
// int maxnumber = findmax(a,b,c);
// cout<<maxnumber;
// char getgrade = takemarks(a);
// cout<<getgrade<<endl;
// int a;
// cout<<"enter the valuof n "<<endl;
// cin>>a;
// int ans = getevensum(a);
// cout<<"even sum is equal to the "<<ans<<endl;

int a;
cout<<"enter the value of n "<<endl;
cin>>a;
char finalgrd= inmarks(a);
cout<<finalgrd<<endl;
}
