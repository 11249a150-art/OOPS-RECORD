#include<iostream>
using namespace std;
class book{
    public:
    string title;
    string author;
    float price;
    void display(){
        cout<<"title:"<<title
        <<",author:"<<author
        <<",price:rs."<<price<<endl;
    }
};
int main(){
    book b1, b2;
    b1.title="c++programming";
    b1.author="bjarne stroustrup";
    b1.price=7540.50;
    b2.title="data structures";
    b2.author="mark allen weiss";
    b2.price=600.75;
    b1.display();
    b2.display();
    return 0;

}