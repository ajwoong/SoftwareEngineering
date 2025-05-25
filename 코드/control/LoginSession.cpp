#include "LoginSession.h"

// 생성자: 로그인 사용자 정보를 초기화한다 (처음에는 로그인된 사용자 없음)
LoginSession::LoginSession() : loggedInSystemUser(nullptr) {}

// 현재 로그인된 사용자 정보를 반환한다
SystemUser* LoginSession::getLoggedInSystemUser() {
    return loggedInSystemUser;
}

// 로그인 성공 시 세션에 해당 사용자 정보를 저장한다
void LoginSession::foundSystemUserLogin(SystemUser* systemUser) {
    loggedInSystemUser = systemUser;
}

// 로그아웃 시 세션의 로그인 사용자 정보를 초기화한다
void LoginSession::foundSystemUserLogout() {
    loggedInSystemUser = nullptr;
}