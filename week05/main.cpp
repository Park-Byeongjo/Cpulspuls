#include<iostream>
#include<string>
#include"Trangle.h"

using namespace std;


point Input(string point) {
    int x, y;
    int c = point.find(",");
    int e = point.size();
    x = stoi(point.substr(0, c));
    y = stoi(point.substr(c + 2, e - c - 2));
    return { x, y };
}

int main() {
    string pA, pB, pC;
    cout << "a 좌표 : ";
    getline(cin, pA);
    point a = Input(pA);
    cout << "b 좌표 : ";
    getline(cin, pB);
    point b = Input(pB);
    cout << "c 좌표 : ";
    getline(cin, pC);
    point c = Input(pC);

    Trangle t(a, b, c);
    cout << "a-b의 거리 : " << t.getlineA() << endl;
    cout << "b-c의 거리 : " << t.getlineB() << endl;
    cout << "c-a의 거리 : " << t.getlineC() << endl;
    cout << "삼각형 판별 : ";
    if (t.verification()) {
        cout << "삼각형이 맞습니다." << endl;
    }
    else {
        cout << "삼각형이 아닙니다." << endl;
    }
    cout << "넓이 : " << t.heron() << endl;
    return 0;
}