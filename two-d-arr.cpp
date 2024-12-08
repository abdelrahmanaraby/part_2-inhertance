    #include <iostream>
    using namespace std;
    // abstract class non object .
    class Two_D {
    private:
    int arr[3][3];
    public:
    void set_arr(int rows,int cloums ,int data ){
    if (rows>=0 && cloums>=0 && cloums<3){
        arr[rows][cloums]=data;
        }
    else {
        cout <<"invalid data : "<<"\n";
    }
    }
    void get_print(){
        for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
        }
    }
    };
    int main() {
Two_D obj ;
// frist rows 
    obj.set_arr(0, 0, 1);
    obj.set_arr(0, 1, 2);
    obj.set_arr(0, 2, 3);

    obj.set_arr(1, 0, 4);
    obj.set_arr(1, 1, 5);
    obj.set_arr(1, 2, 6);
    // second  rows 
    obj.set_arr(2, 0, 7);
    obj.set_arr(2, 1, 8);
    obj.set_arr(2, 2, 9);
  
obj.get_print();
    }