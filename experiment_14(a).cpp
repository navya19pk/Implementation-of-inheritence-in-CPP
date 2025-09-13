//Navya Pawan Khajuria
//24070123151
//B3

#include<iostream>
#include<string>
using namespace std;

class car {
    public:
    string a ="Toyota";
    void model(){
        cout<<"Fortuner"<<endl;
    }
};
class name: public car {
    public:
    string b ="Glanza";
};

int main(){
    name u1;
    u1.model();
    cout<<u1.a ;
    cout<< u1.b;
}


// OUTPUT:
//Fortuner
//Toyota Glanzia
