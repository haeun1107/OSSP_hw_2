#include <iostream>

using namespace std;

int main(void) {
    string team;
    string name;
    int num;

    cout << "팀 이름을 입력하세요 : ";
    cin >> team;

    cout << "이름을 입력하세요 : ";
    cin >> name;

    cout << "학번을 입력하세요 : ";
    cin >> num;

    cout << endl;

    cout << "<출력>" << endl;
    cout << "팀 이름 : " << team << endl;
    cout << "이름 : " << name << endl;
    cout << "학번 : " << num << endl;
}