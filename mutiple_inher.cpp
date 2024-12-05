#include <iostream>
using namespace std;
/*
mutiple inheritance .
class a , baba 
class b ,mama
class son , baba,mama 
*/ 
class person {
    protected:
    // 
    int age ;
    string name ;
};
class empolyee{
    protected :
    // 
    string department;
};
class hr: public  person,public empolyee  {
public :
void set_age(int a ){
    age =a;
}
int get_age(){
    return age ;
}

void set_name(string n){
    name =n;
}
string  get_name(){
    return name ;
}
void set_department(string d){
    department=d;
}
string get_set_department (){
    return    department;
}
double calc_salary( double salary){
    return salary *90;
}
//   over time _calc_salary.
double calc_salary_over_time( double salary2){
    return salary2 *100;
}
};
int main() {
hr op;
op.set_name("ali");
cout<<op.get_name()<<" \n";
op.set_age(20);
cout<<op.get_age()<<"\n ";
// hours.
int hours;
cout<<" enter your number of  _ hours ? "<<endl;
cin>> hours ;
if (hours>12){
    cout<<op.calc_salary_over_time( hours );
}
else{
   cout<<op.calc_salary( hours );
}
}