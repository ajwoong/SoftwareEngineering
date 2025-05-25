#pragma once
#include <vector>
#include <string>
#include "SystemUser.h"

// SystemUserList 클래스는 시스템에 등록된 모든 사용자(SystemUser 객체들)를 저장하고 관리한다.
class SystemUserList {
private:
    // 시스템에 가입된 사용자들을 저장한다.
    vector<SystemUser*> systemUsers;

public:
    // 시스템에 새로운 사용자를 추가하는 함수이다.
    void addMember(SystemUser* systemUser);

    // 주어진 ID와 비밀번호에 해당하는 사용자를 찾는 함수이다.
    // 일치하는 사용자가 없을 경우 nullptr를 반환한다.
    SystemUser* findMember(const string& id, const string& password);
};