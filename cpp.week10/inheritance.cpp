// # include<iostream>

// using namespace std;
// class animal{
//    public:
//     // protected:
//     int age;
//     void eat(){
//         cout<<"eating";
//     }
// };
// class dog:public animal{
//     // public:
//     // void print(){
//     //     cout<<this->age;
//     // }
// };

// int main(){
//     dog d1;
//     // cout<<d1.age;
//     d1.eat();
//     return 0;
// }


// types of inheritance::::::::::::
// 1) single level of in heritance
// # include<iostream>

// using namespace std;
// class car{
//    public:
    
 
//     int age=56;
//     int weight;
//     int gears;

//     void speedup(){
//         cout<<"speeding up"<<endl;
//     }
//     void speeddown(){
//         cout<<"speeeding down"<<endl;
//     }

// };
// // making child object
// class thar:public car{
    
// };

// int main(){
//     thar t1;
//     t1.speedup();
//     t1.speeddown();
//     t1.age;

//     return 0;
// }



// 2) multi level of in heritance
// # include<iostream>

// using namespace std;
// class car{
//    public:
    
 
//     int age=56;
//     int weight;
//     int gears;

//     void speedup(){
//         cout<<"speeding up"<<endl;
//     }
//     void speeddown(){
//         cout<<"speeeding down"<<endl;
//     }

// };
// // making child object
// class thar:public car{
//     public:
//     int size;
// };
// class neo:public thar{
//     public:
//     int goodswear;
// };

// int main(){
//     neo n1;
//     cout<<n1.goodswear<<" "<<n1.size<<" "<<n1.gears;

//     return 0;
// }

// 3) multiple heritance
// # include<iostream>

// using namespace std;
// class car{
//    public:
    
 
//     int age=56;
//     int weight;
//     int gears;

//     void speedup(){
//         cout<<"speeding up"<<endl;
//     }
//     void speeddown(){
//         cout<<"speeeding down"<<endl;
//     }

// };
// // making child object
// class thar{
//     public:
//     int size;
// };
// class harsh:public thar, public car{
//     public:
//     int goodswear;
// };

// int main(){
//     harsh H1;
//     cout<<H1.goodswear<<" "<<H1.size<<" "<<H1.gears;

//     return 0;
// }



// 4) heirarchical  heritance
# include<iostream>

using namespace std;
class car{
   public:
    
 
    int age=56;
    int weight;
    int gears;

    void speedup(){
        cout<<"speeding up"<<endl;
    }
    void speeddown(){
        cout<<"speeeding down"<<endl;
    }

};
// making child object
class thar:public car{
    public:
    int size;
};
class harsh:public car{
    public:
    int goodswear;
};

int main(){
    harsh H1;
    cout<<H1.goodswear<<" "<<" "<<H1.gears;
   H1.speeddown();

    return 0;
}



// 5) hybrid mode of inheritance
// can be a mixture oa all the inheritances