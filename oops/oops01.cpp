# include<iostream>
using namespace std;
class animal{
// int age;
// int weight;
// char ch;

// states /properties::

private:
int weight;
public:
int age;
string type;


// behavior


void sleep(){
    cout<<"sleeping";
}
    
    int getweight(){
        return weight;

    }

    void setweight(int w){
        weight= w;
    }
    
    
    };



int main(){
    animal dada;

    dada.age=90; 
    dada.type="harsh";
    cout<<"dada age  :: "<<dada.age<<endl ;
    // cout<<"functions "<<
    dada.sleep();


 dada.setweight(11);
    cout<<"dada name  :: "<<dada.getweight()<<endl;
    // cout<<"size of this classs : "<<sizeof(animal);

    // dynamic memory allocation
    animal * suresh=new animal;
    (*suresh).age=100;
    (*suresh).type="gagaga";

    suresh ->age=9;
    cout<<(suresh->age);

    suresh ->sleep();
    return 0;
}