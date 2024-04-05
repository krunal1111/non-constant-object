#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void set(int num)
    {
        a=num;
        cout<<"function a: "<<a<<endl;
    }
    void display() const    //you can make function constant if  you don't want to modify the data member of class in that function.
    {
        cout<<"display a: "<<a<<endl;
    }
};
int main()
{
    A obj;
    obj.set(5);
    obj.display();  //constant funtion is called by non-constant obj

    return 0;
}