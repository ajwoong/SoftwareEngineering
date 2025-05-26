#include "LogoutUI.h"

// 생성자: 세션과 로그아웃 컨트롤 객체, 출력 스트림을 받아 boundary 객체를 초기화한다
LogoutUI::LogoutUI(LoginSession* session, LogoutSystemUser* logoutSystemUser, ofstream& out)
    : session(session), logoutSystemUser(logoutSystemUser), out(out) {}

// 현재 로그인된 사용자의 ID를 출력하고 로그아웃을 수행한다
void LogoutUI::logoutRequest() {
    SystemUser* systemUser = session->getLoggedInSystemUser();

    // 로그인된 사용자가 존재하는 경우, 로그아웃 메시지를 출력한다
    if (systemUser != nullptr) {
        out << "2.2. 로그아웃" << endl;
        out << "> " << systemUser->getSystemUserId() << "\n" << endl;
    }

    // 컨트롤 객체를 통해 실제 로그아웃 처리를 수행한다
    logoutSystemUser->logout();
}