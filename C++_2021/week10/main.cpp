#include<iostream>
#include<string>

using namespace std;

template<typename T1, typename T2> //C++11버전 방식
auto sum(T1 t1, T2 t2) -> decltype(t1 + t2) {
    return t1 + t2;
}


int main() {
    string str1 = "apple", str2 = "banana";
    cout << sum(1, 2) << endl;
    cout << sum(1.1, 2.2) << endl;
    //해결방법1
    cout << sum<string>("apple", "banana") << endl;
    //해결방법2
    cout << sum(str1, "banana") << endl; // or sum("apple", str2) 
    //해결방법3
    cout << sum(str1, str2) << endl;

    return 0;
}