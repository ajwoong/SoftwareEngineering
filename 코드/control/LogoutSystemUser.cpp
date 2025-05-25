#include "LogoutSystemUser.h"
#include "../entity/SystemUser.h"

// 생성자: 로그인 세션을 받아 LogoutSystemUser 객체를 초기화한다
LogoutSystemUser::LogoutSystemUser(LoginSession* session)
    : session(session) {}

// 세션에 저장된 로그인된 사용자 정보를 초기화한다
void LogoutSystemUser::logout() {
    session->foundSystemUserLogout();
}