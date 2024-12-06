#include <iostream>
using namespace std;
// multi level inheratance 
/*
class A;
class b:A;
class c:b;
*/ 
class  Vehicle{
    protected :
    int wheels;
    int seats;
    public:
     Vehicle (){

     }
      Vehicle  (int s,int w){
        wheels=w;
        seats =s;
      }
      ~  Vehicle(){
        cout<<"iam deleted ! "<<'\n';
      }

};
class car: public  Vehicle{
    protected :
    string brand;
    public:
    car (){

     } 
     car (int se,int w,string b): Vehicle(se,w),brand (b){
// brand =b;
     }
     ~ car (){
            cout<<"iam deleted ! "<<'\n';
     }
     void get_info (){
        cout<<" the brand ->"<<brand<<" , "<<"the number of seats -> "<<seats <<" , "<<"the wheels "<<    wheels <<'\n';
     }
};
// 
class  ElectricCar :  public  car  {
    public :
     ElectricCar (int set,int wee ,string bra) : car(set,wee,bra){

     }
     ~ElectricCar  (){
                 cout<<"iam deleted ! "<<'\n';
     }
};

int main() {
 ElectricCar  op (4,4,"tesla ");
 op.get_info();
}
