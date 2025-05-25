#pragma once
#include <string>
#include "../entity/SystemUserList.h"

// 회원 가입을 처리하는 컨트롤 클래스
// 사용자 정보를 받아 SystemUser 객체를 생성하고 사용자 목록에 추가하는 역할을 수행한다
class JoinMember {
private:
    // 전체 사용자 정보를 저장하는 리스트에 대한 참조
    SystemUserList* systemUserList;

public:
    // 사용자 리스트 포인터를 주입받아 초기화한다
    JoinMember(SystemUserList* systemUserList);

    // 입력된 정보를 바탕으로 회원을 생성하고 사용자 리스트에 등록한다
    void join(const string& id, const string& password, const string& phone);
};