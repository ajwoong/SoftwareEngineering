#include "AddBicycle.h"

// 자전거 리스트와 로그인 세션 정보를 주입받아 AddBicycle 인스턴스를 초기화한다
AddBicycle::AddBicycle(BicycleList* bicycleList, LoginSession* session)
    : bicycleList(bicycleList), session(session) {}

// 자전거 ID와 제품명을 바탕으로 Bicycle 객체를 생성하고 자전거 목록에 추가한다
void AddBicycle::addNewBicycle(const string& id, const string& productName) {
    Bicycle* newBicycle = new Bicycle(id, productName);

    bicycleList->addBicycle(newBicycle);
}