#include <iostream>

using namespace std;

void helloworld(){
    std::cout<<"Hello World!"<<endl;
}

int main()
{
    helloworld();
    void(*ptr1)() = helloworld;
    ptr1();
    auto func1 = helloworld;
    func1();
    auto func2 = &helloworld;
    func2();
    return 0;
    
    typedef void(*func_name)(); //with typedef
    func_name func3 = &helloworld;
    func3();
}

//Hello World!
//Hello World!
//Hello World!
//Hello World!
//Hello World!
