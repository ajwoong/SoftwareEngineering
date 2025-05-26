#include "LoginUI.h"

// 생성자: 로그인 컨트롤 객체와 입출력 스트림을 초기화한다
LoginUI::LoginUI(LoginSystemUser* loginSystemUser, ifstream& in, ofstream& out)
    : loginSystemUser(loginSystemUser), in(in), out(out) {}

// 사용자 입력(ID, 비밀번호)을 받아 로그인 컨트롤러에 전달하고, 결과 메시지를 출력한다
void LoginUI::loginRequest() {
    string id, password;
    in >> id >> password;

    // 로그인 컨트롤 객체에 로그인 요청 전달
    loginSystemUser->login(id, password);

    // 로그인 결과 메시지를 출력
    out << "2.1. 로그인" << endl;
    out << "> " << id << " " << password << "\n" << endl;
}