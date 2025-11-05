#include<stdio.h>
using namespace std;

class employee{
    public:
    int emp ID;
    string name;
    float salary:
    void.set employee(int id,string n,float s){
        emp ID=id;
        name=n;
        salary=s;
    }
}

void employee ::displayemployee(){
    cout<<"employee ID;"<<emp ID
    <<",name:"<<name
    <<",salary:rs."<<salary<<salary<<endl;
}

int main(){
    employee e1,e2;
    e1.setemployee(101,"ravi",50000.5);
    e2.setemployee(102,"priya",62000.50);
    e1.displayemployee();
    e2.displayemployee();
    return 0;

}