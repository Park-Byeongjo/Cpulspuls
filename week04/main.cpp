#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct STUDENT {
    string name;
    string stu_num;
    int score;
};

//정보 입력
void Inputdata(STUDENT& s, string inform) {
    int i, j, c;
    i = inform.find(",");
    j = inform.find(",", i + 1);
    c = inform.size();
    s.name = inform.substr(0, i);
    s.stu_num = inform.substr(i + 2, j - i - 2);
    s.score = stoi(inform.substr(j + 2, c - j - 2));
}


int main() {
    int count;
    cout << "학생 수 : ";
    cin >> count;
    cin.ignore(); // \n값 제거
    // 동적할당
    STUDENT* student = new STUDENT[count];
    cout << "이름, 학번, 점수 : " << endl;
    // 정보 입력
    for (int i = 0; i < count; i++) {
        string inform;
        getline(cin, inform);
        Inputdata(*(student + i), inform);
    }
    // 정렬
    for (int i = count; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if ((student + j)->name > (student + j + 1)->name) {
                STUDENT temp = *(student + j);
                *(student + j) = *(student + j + 1);
                *(student + j + 1) = temp;
            }
        }
    }
    // 출력
    for (int i = 0; i < count; i++) {
        cout << (student + i)->name << ", " << (student + i)->stu_num << ", " << (student + i)->score << endl;
    }
    // 동적할당 해제
    delete[] student;
    return 0;
}