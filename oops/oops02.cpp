# include<iostream>

using namespace std;

class fruit{

    public:
    string name;
    string namee = "dada";
};
class mango:public fruit{
    public:
    int weight;

};

class alphanso:public mango{
    public:
    int sugerlevel;

};

int main(){
    alphanso a;
    a.name="harsh";
    cout<<a.namee<<" "<<a.weight<<" "<<a.sugerlevel<<endl;

    return 0;
}