#pragma once
#include "../entity/SystemUserList.h"
#include "LoginSession.h"

// 사용자의 로그인 처리를 담당하는 컨트롤 클래스
// 사용자 목록에서 ID, 비밀번호로 사용자를 찾아 세션에 로그인 상태를 저장한다
class LoginSystemUser {
private:
    // 전체 사용자 목록을 저장하고 있는 객체
    SystemUserList* systemUserList;

    // 로그인 상태를 관리하는 세션 객체
    LoginSession* session;

public:
    // 사용자 목록과 세션 객체를 주입받아 초기화한다
    LoginSystemUser(SystemUserList* systemUserList, LoginSession* session);

    // 사용자 ID와 비밀번호를 받아 로그인 처리를 수행한다
    // 인증에 성공하면 세션에 사용자 정보를 저장한다
    void login(const string& id, const string& password);
};