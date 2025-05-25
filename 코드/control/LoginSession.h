#pragma once
#include "../entity/SystemUser.h"

// 현재 로그인된 사용자 정보를 관리하는 세션 클래스
// 로그인 및 로그아웃 상태를 저장하고, 현재 로그인된 사용자 정보를 외부에 제공한다
class LoginSession {
private:
    // 로그인된 사용자 정보 (nullptr이면 로그아웃 상태)
    SystemUser* loggedInSystemUser;

public:
    // 초기화 시 로그인 상태를 nullptr로 설정한다
    LoginSession();

    // 현재 로그인된 사용자 객체를 반환한다
    SystemUser* getLoggedInSystemUser();

    // 로그인 성공 시 해당 사용자 정보를 세션에 저장한다
    void foundSystemUserLogin(SystemUser* systemUser);

    // 로그아웃 처리 시 세션의 사용자 정보를 제거한다
    void foundSystemUserLogout();
};