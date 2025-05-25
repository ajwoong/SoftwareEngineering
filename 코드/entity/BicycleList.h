#pragma once
#include <vector>
#include <string>
#include "Bicycle.h"

// 시스템에 등록된 자전거 목록을 관리하는 클래스
// 자전거 추가 및 ID를 기반으로 자전거 검색 기능을 제공한다
class BicycleList {
private:
    // 등록된 자전거를 저장하는 리스트
    vector<Bicycle*> bicycles;

public:
    // 자전거를 목록에 추가한다
    void addBicycle(Bicycle* bicycle);

    // 주어진 ID에 해당하는 자전거를 검색해 반환한다
    // 일치하는 자전거가 없으면 nullptr를 반환한다
    Bicycle* findBicycle(const string& id);
};