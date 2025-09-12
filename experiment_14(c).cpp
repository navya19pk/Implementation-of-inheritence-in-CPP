//Navya Pawan Khajuria 
//24070123151  
//B3

#include<iostream>
#include<string>
using namespace std;

class Food {
    public:
    string cuisine="Indian";
    void type(){
        cout<<"Indian Subcontinental"<<endl;
    }
};
class Dish: public Food {
    public:
    string dish="Chole Bhature";
};
class Restaurant: public Dish {
    public:
    string name="Navya's Kitchen";
};

int main(){
    Restaurant f3;
    f3.type();
    cout<<f3.cuisine<<": "<<f3.dish<<endl;
    cout<<"Restaurant: "<<f3.name;
}

//Output:
//Indian Subcontinental
//Indian: Chole Bhature
//Restaurant: Navya's Kitchen
