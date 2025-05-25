#pragma once
#include <vector>
#include "Bicycle.h"

// 회원이 대여한 자전거 목록을 관리하는 클래스
// 자전거 대여 및 회원이 대여한 자전거 목록 조회(자전거 ID순) 기능을 제공한다
class RentedBicycleCollection {
private:
    // 회원이 대여한 자전거들을 저장하는 리스트
    vector<Bicycle*> rentedBicycles;

public:
    // 자전거를 회원의 대여 목록에 추가한다
    void rentBicycle(Bicycle* bicycle);

    // 자전거 ID 기준으로 정렬된 대여 목록을 반환한다
    vector<Bicycle*> getAll();
};