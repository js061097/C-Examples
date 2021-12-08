#include <iostream>

using namespace std;

void PrintVal(int&x){
    cout<<"This function uses lvalue reference: "<<x<<endl;
}

void PrintVal(int&& x){
    cout<<"This function uses rvalue reference: "<<x<<endl;
}


int main()
{
    int a = 5,b = 6;
    
    PrintVal(a + b);
    PrintVal(a);
    
    int c = a + b;
    PrintVal(c);
    PrintVal(c*2);

    return 0;
}
