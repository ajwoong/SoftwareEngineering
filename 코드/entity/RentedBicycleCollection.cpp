#include "RentedBicycleCollection.h"
#include <algorithm> 

// 전달받은 Bicycle 객체 포인터를 대여 목록에 추가한다
void RentedBicycleCollection::rentBicycle(Bicycle* bicycle) {
    rentedBicycles.push_back(bicycle);
}

// 자전거 ID 기준으로 오름차순 정렬된 대여 목록을 반환한다
vector<Bicycle*> RentedBicycleCollection::getAll() {
    vector<Bicycle*> sortedRentedBicycles = rentedBicycles;

    sort(sortedRentedBicycles.begin(), sortedRentedBicycles.end(),
         [](Bicycle* a, Bicycle* b) {
             return a->getBicycleId() < b->getBicycleId();
         });

    return sortedRentedBicycles;
}