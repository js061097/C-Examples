#include <iostream>
#include <vector>

void PrintVal(int a){
    std::cout<<a<<std::endl;
}

void forEach(std::vector<int> &vect,void(*print)(int)){
    for(int i:vect)
        print(i);
}


int main()
{
    std::vector<int> vect {1,2,3,4};
    forEach(vect,&PrintVal);
    
    forEach(vect,[](int val){std::cout<<val<<endl;}); //lambdas
    
    return 0;
}

/*
1
2
3
4
*/
