#include <iostream>
using namespace std;
// hiretical 
class person {
    private:
    int age;
    string name ;
    public:
    person (){

    }
    person(int a,string n){
        age =a;
        name =n;
    }
    // 
    void print (){
cout<<"the is "<<name<<'\n';
cout<<"the age is : "<<age <<'\n';
    }
};
// 
class student: public person  {
    private :
    char gpa;
    public :
    student (){

    }
    student (char g,string n,int a):person(a,n){
        gpa=g;
    }
void print (){
person::print ();
cout<<"gpa : "<<gpa<<'\n';
}
};
class programer : public person  {
    private:
    string spceialist;
    public:
programer (){

}
programer(string s ,string n,int a):person(a,n){
    spceialist=s;
}
void print (){
  person::print ();
cout<<"iam spceialist :  "<<spceialist<<'\n';
}
};
// 
class oop {
    public:
    void print (){
        cout<<"pppppp";
    }
};
class pop:public oop {

};
int main() {
     student op('A',"AHMED ",20);
     op.print();
cout<<"==========================\n";
programer oop ("web delevoper","osama elzero",30);
oop.print();
// drive class 
//pop opj;
//oop *op=&opj;   // Call the `print()` method through the base class pointer
//op->print();
}
