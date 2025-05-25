#pragma once
#include "../control/LoginSession.h"
#include "../entity/BicycleList.h"

// 로그인된 사용자가 자전거를 대여하는 기능을 담당하는 컨트롤 클래스
// 자전거 ID를 입력받아 해당 자전거를 사용자의 대여 목록에 추가하고 관련 정보를 반환한다
class RentBicycle {
private:
    // 전체 자전거 목록에 접근하기 위한 포인터
    BicycleList* bicycleList;

    // 현재 로그인된 사용자 정보를 조회하기 위한 세션 포인터
    LoginSession* session;

public:
    // 자전거 목록과 세션 정보를 주입받아 초기화한다
    RentBicycle(BicycleList* bicycleList, LoginSession* session);

    // 자전거 ID를 받아 사용자가 해당 자전거를 대여하도록 처리한다
    // 대여된 자전거의 ID와 제품명을 pair로 반환한다
    pair<string, string> memberRentBicycle(const string& bicycleId);
};