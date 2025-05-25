#include "SystemUserList.h"

// SystemUser 객체를 리스트에 추가하는 함수이다.
void SystemUserList::addMember(SystemUser* systemUser) {
    systemUsers.push_back(systemUser);
}

// 주어진 ID와 비밀번호를 가진 사용자를 리스트에서 검색하는 함수이다.
// ID와 비밀번호가 모두 일치하는 SystemUser를 반환한다.
// 일치하는 사용자가 없는 경우 nullptr를 반환한다.
SystemUser* SystemUserList::findMember(const string& id, const string& password) {
    for (SystemUser* systemUser : systemUsers) {
        if (systemUser->getSystemUserId() == id && systemUser->getSystemUserPassword() == password) {
            return systemUser;
        }
    }
    return nullptr;
}