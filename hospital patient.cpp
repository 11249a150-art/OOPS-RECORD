#include<stdio.h>
using namespace std;
class patient{
    public:
    int patientID;
    string name;
    string disease;

    void setpatient(int id,string n,string){
        patientID =id;
        name =n;
        disease=d;
}
void showpatient();
};

void patient:: show patient{
    cout<<"patient ID:"<<patientID 
    <<",name :"<<name
    <<",disase:"<<disease<<endl;
}

int main(){
    patient p1,p2
    p1.setpatient(301,"arjun","fever")
    p2.setpatient(302,"meena","diabetes")
    p1.showpatient();
    p2.showpatient();
    return 0;
}
