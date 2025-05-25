#include "LoginSystemUser.h"

// 사용자 목록과 세션 객체를 받아 LoginSystemUser 객체를 초기화한다
LoginSystemUser::LoginSystemUser(SystemUserList* systemUserList, LoginSession* session)
    : systemUserList(systemUserList), session(session) {}

// 사용자 ID와 비밀번호를 이용해 사용자 인증을 수행한다
// 일치하는 사용자가 존재하면 세션에 로그인 사용자로 설정한다
void LoginSystemUser::login(const string& id, const string& password) {
    SystemUser* found = systemUserList->findMember(id, password);

    if (found != nullptr) {
        session->foundSystemUserLogin(found);
    }
}