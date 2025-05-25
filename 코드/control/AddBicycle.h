#pragma once
#include "../entity/BicycleList.h"
#include "../entity/Bicycle.h"
#include "../control/LoginSession.h"

// 자전거 등록 기능을 담당하는 컨트롤 클래스
// 관리자가 새로운 자전거를 등록할 수 있도록 처리한다
class AddBicycle {
private:
    // 자전거 정보를 저장하는 목록 객체
    BicycleList* bicycleList;

    // 로그인 상태를 확인하기 위한 세션 객체
    LoginSession* session;

public:
    // 자전거 리스트와 세션 정보를 주입받아 초기화한다
    AddBicycle(BicycleList* bicycleList, LoginSession* session);

    // 입력받은 자전거 ID와 제품명을 기반으로 자전거를 생성하고 목록에 추가한다
    void addNewBicycle(const string& id, const string& productName);
};