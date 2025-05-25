#pragma once
#include "../entity/SystemUserList.h"
#include "LoginSession.h"

// 로그아웃 기능을 수행하는 컨트롤 클래스
// 로그인 세션에서 현재 로그인된 사용자를 로그아웃 처리한다
class LogoutSystemUser {
private:
    // 로그인 세션 객체. 현재 로그인된 사용자 상태를 저장하고 있음
    LoginSession* session;

public:
    // 세션 객체를 주입받아 초기화한다
    LogoutSystemUser(LoginSession* session);

    // 현재 로그인된 사용자를 로그아웃 처리한다
    void logout();
};