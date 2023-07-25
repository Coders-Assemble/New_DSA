# include<iostream>

using namespace std;


// polymorphysome>>
// compile time poly morphisome>>
// function overloading>>
// class math{
//     public:
//     int sum(int a,int b){
//         return (a+b);
//     }
//     int sum(int a,int b,int c){
//         return (a+b+c);
//     }
//     int sum(int a,float b){
//         return (a+b);
//     }
// };
// int main(){
//     math obj;
//     cout<<obj.sum(1,567.56f);
//     return 0;
// }
// polymorphysome>>
// compile time poly morphisome>>
// oprator overloaading
class param{
    public:
    int val;

    void operator +(param& obj2){
        int val1=this->val;
        int val2=obj2.val;
        cout<<(val1-val2)<<endl;
    }
};
int main(){
  param obj1,obj2;
  obj1.val=7;
  obj2.val=2;
  obj1+obj2;
    return 0;
}