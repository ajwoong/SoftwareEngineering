#pragma once
#include <fstream>
#include "../control/LoginSystemUser.h" 

// 로그인 요청을 처리하는 boundary 클래스
// 사용자 입력을 받아 로그인 컨트롤러를 호출하고, 결과를 출력 스트림에 기록한다
class LoginUI {
private:
    // 로그인 처리를 담당하는 컨트롤 객체
    LoginSystemUser* loginSystemUser;

    // 사용자 입력을 읽어올 입력 스트림 참조
    ifstream& in;

    // 출력 메시지를 기록할 출력 스트림 참조
    ofstream& out;

public:
    // 컨트롤 객체와 입출력 스트림을 주입받아 boundary 객체를 초기화한다
    LoginUI(LoginSystemUser* loginSystemUser, ifstream& in, ofstream& out);

    // 사용자 ID와 비밀번호를 입력받아 로그인 요청을 수행한다
    void loginRequest();
};