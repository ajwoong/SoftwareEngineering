#include "JoinMember.h"
#include "../entity/SystemUserList.h"
#include "../entity/SystemUser.h"

// 사용자 리스트 객체를 주입받아 JoinMember 인스턴스를 초기화한다
JoinMember::JoinMember(SystemUserList* systemUserList) : systemUserList(systemUserList) {}

// 전달받은 ID, 비밀번호, 전화번호를 사용해 새로운 회원을 생성하고
// 생성된 사용자 객체를 사용자 목록에 추가한다
void JoinMember::join(const string& id, const string& password, const string& phone) {
    SystemUser* newSystemUser = new SystemUser(id, password, phone, "member");

    systemUserList->addMember(newSystemUser);
}