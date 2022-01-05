
#include <iostream>
#include <string>

using namespace std;
typedef unsigned int ui;

template <typename T>
T maxi(T a,T b){
    return a>b? a:b;
}
template <typename T1, typename T2>
void PrintData(T1 a, T2 b)
{
    cout<<"Name :"<<a<<endl<<"Id :"<<b;
}

int main()
{
  
    cout<<maxi<int>(2,3)<<endl;  //3
    PrintData<string,ui>("Jason",123456);  
    return 0;
}
