#include<iostream>
#include<string>
#include"Person.h"

using namespace std;

int main() {
    Student s("kim", 22, "010-9999-1111");
    Doctor d("kong", 33, "010-0022-2231");
    Worker w("choi", 26, "010-4213-4242");
    s.inform();
    s.toking();
    cout << endl;
    d.inform();
    d.toking();
    cout << endl;
    w.inform();
    w.toking();
    cout << endl;
    return 0;
}