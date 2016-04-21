#include <iostream>
using namespace std;

int main(){

    int x = 10; // variable x
    int *p;
    p = &x;

    cout << "Value of x variable: \n" << x << "\n" << endl;
    
    cout << "Address of x variable: " << &x << "\n" << endl;

    cout << "Access the variable at the address: \n" << *p << "\n" << endl;
    
    cout << "Address stored in p pointer variable: \n" << p << "\n" << endl;

    return 0;
}
