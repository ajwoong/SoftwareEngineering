#pragma once
#include "../control/LoginSession.h"
#include "../entity/Bicycle.h"

// 로그인된 사용자의 대여 자전거 목록을 조회하는 기능을 담당하는 클래스
class MemberBicycle {
private:
    // 현재 로그인된 사용자 정보를 관리하는 세션
    LoginSession* session;

public:
    // 세션 객체를 주입받아 초기화한다
    MemberBicycle(LoginSession* session);

    // 로그인된 사용자가 대여한 자전거 목록을 반환한다
    vector<Bicycle*> getMemberRentedBicycles();
};