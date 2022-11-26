#include <iostream>
using namespace std;

int main(){
    int a[10], *b, c;
    a[0]=1;
    a[1]=2;
    b = &a[1];
    c = a[1];
// a is the same as &a[0]
    for (int i=0; i<10; i++){
        cout << &a[i] << " " << *(a+i) << endl;
    }
    
    // cout << a[1] << " " << &a[1] << endl;
    // cout << *b << " " << b << endl;
    cout << sizeof(int) << endl;
    cout << c << " " << &c << endl;

    cout << "=======" << endl;

    a[1]=100;

    cout << a[0] << " " << &a[0] << endl;
    cout << a[1] << " " << &a[1] << endl;
    cout << *b << " " << b << endl;
    cout << sizeof(int) << endl;
    cout << c << " " << &c << endl;

    return 0;
}