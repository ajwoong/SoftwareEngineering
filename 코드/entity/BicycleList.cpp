#include "BicycleList.h"

// 자전거를 목록에 추가한다
void BicycleList::addBicycle(Bicycle* bicycle) {
    bicycles.push_back(bicycle);
}

// 자전거 ID를 기준으로 목록에서 자전거를 검색한다
// 일치하는 ID가 있으면 해당 자전거 포인터를 반환하고,
// 없으면 nullptr를 반환한다
Bicycle* BicycleList::findBicycle(const string& id) {
    for (Bicycle* bicycle : bicycles) {
        if (bicycle->getBicycleId() == id) {
            return bicycle;
        }
    }
    return nullptr;
}