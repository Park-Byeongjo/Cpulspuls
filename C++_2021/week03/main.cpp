#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int lower(int c) {
    return c - 'A' + 'a';
}


//파일 불러오기
string fileInput(string fname) {
    ifstream ifs;
    string before;
    ifs.open(fname);
    if (ifs.is_open()) {
        while (!ifs.eof()) {
            string temp;
            getline(ifs, temp);
            if ((temp.find(" ", temp.size()) == string::npos) && !temp.empty()) {
                temp += " ";
            }
            if (before.empty()) before = temp;
            else before += temp;
        }
    }
    ifs.close();
    return before;
}



int main() {
    ifstream ifs;
    string before = fileInput("./input.txt");
    string strnum, str;

    // 대문자 -> 소문자 / 숫자 분리 / 특수문자 -> 공백
    while (!before.empty()) {
        string temp;
        int n = before.find(" ");
        temp = before.substr(0, n + 1);
        before.erase(0, n + 1);
        for (int i = 0; i < temp.size(); i++) {
            if ('A' <= temp[i] && temp[i] <= 'Z') { // 대문자 -> 소문자
                temp[i] = lower(temp[i]);
            }
            else if ('a' <= temp[i] && temp[i] <= 'z') { // 소문자 그대로 두기
                temp[i] = temp[i];
            }
            else if ('0' <= temp[i] && temp[i] <= '9') { // 숫자 분리
                if (strnum.empty()) strnum = temp[i];
                else {
                    strnum += temp[i];
                }
                temp.replace(i, 1, " ");
            }
            else { // 그외 문자 공백처리
                temp.replace(i, 1, " ");
            }
        }
        if (str.empty()) str = temp;
        else {
            str += temp;
        }
    }
    
    int cont = 0; // 단어 갯수 확인 
    int i = str.find(" ");
    // 중복 공백 하나로 처리 
    while (true) {
        if (str[i] == str[i + 1]) {
            str.erase(i, 1);
        }
        else {
            i = str.find(" ", i + 1);
            cont++;
        }
        if (str.find(" ", i) == string::npos) {
            str += " ";
            break;
        }
    }
    cout << str << endl;
    // 정렬
    int c = 0;
    for (int a = 0; a < cont; a++) {
        int j = str.find(" ");
        int k = str.find(" ", j + 1);
        string t1 = str.substr(c, j);
        string t2 = str.substr(j + 1, k - j);
        for (int b = a; b < cont; b++) {
            if (t1.compare(t2) > 0) {
                str.erase(j + 1, k - j);
                str.insert(c, t2);
            }
            c = j + 1;
            j = str.find(" ", c);
            k = str.find(" ", j + 1);
            t1 = str.substr(c, j - c);
            t2 = str.substr(j + 1, k - j);
        }
        c = 0;
    }
    cout << "단어 갯수 : " << cont << endl;
    cout << str << " " << strnum << endl;
    return 0;
}