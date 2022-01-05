#include <iostream>

class MyClass {
    int myprop {};
public:
     // A const method can't modify class properties:
    // int modMyprop1() const { return ++myprop; } // error: increment of member 
                                                   // 'MyClass::myprop' in 
                                                   // read-only object

    int modMyprop2() const { return myprop + 1; } // fine - myprop is untouched

    int modMyprop3()       { return ++myprop; } // this is not const, so it's
                                                // allowed to modify myprop;
                                                // on the other hand, it can't 
                                                // be invoked by instances
                                                // of MyClass which are 
                                                // declared 'const'
};

int main()
{
    MyClass myinst1; // not const
    // myinst1 can invoke every method (const and not const)
    std::cout << "myinst1.modMyprop2(): " << myinst1.modMyprop2() << '\n';
    std::cout << "myinst1.modMyprop3(): " << myinst1.modMyprop3() << '\n';

    const MyClass myinst2;
    // myinst2 can invoke only const methods
    std::cout << "myinst2.modMyprop2(): " << myinst2.modMyprop2() << '\n';
    // error: passing 'const MyClass' as 'this' argument discards qualifiers:
    // std::cout << "myinst2.modMyprop3(): " << myinst2.modMyprop3() << '\n';
    return 0;
}
