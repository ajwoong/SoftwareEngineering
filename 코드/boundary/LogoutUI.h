#pragma once
#include "../control/LogoutSystemUser.h"
#include <fstream>

// 로그아웃 요청을 처리하는 boundary 클래스
// 현재 로그인된 사용자 정보를 출력하고 로그아웃 처리를 요청한다
class LogoutUI {
private:
    // 로그인 세션 객체 (현재 로그인 사용자 정보 확인용)
    LoginSession* session;

    // 로그아웃 처리를 담당하는 컨트롤 객체
    LogoutSystemUser* logoutSystemUser;

    // 출력 스트림 참조
    ofstream& out;

public:
    // 세션, 컨트롤 객체, 출력 스트림을 주입받아 초기화한다
    LogoutUI(LoginSession* session, LogoutSystemUser* logoutSystemUser, ofstream& out);

    // 로그아웃 요청을 처리한다: 사용자 정보 출력 후 로그아웃 실행
    void logoutRequest();
};