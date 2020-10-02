#include <iostream>
using namespace std;

int main(){

    int x = 10; // variable x
    int *p; // pointer variable
    p = &x; // store the address of x in pointer variable

    // x
    cout << "Value of x variable: \n" << x << "\n" << endl;
    
    // &x
    cout << "Address of x variable: " << &x << "\n" << endl;

    // *p
    cout << "Access the variable at the address: \n" << *p << "\n" << endl;
    
    // p
    cout << "Address stored in p pointer variable: \n" << p << "\n" << endl;

    // *(&p)
    cout<< "Value stored at address of pointer p:\n" << *(&p) << "\n" <<endl;
    
    return 0;
}
