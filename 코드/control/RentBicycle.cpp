#include "RentBicycle.h"

// 자전거 목록과 로그인 세션을 주입받아 RentBicycle 인스턴스를 생성한다
RentBicycle::RentBicycle(BicycleList* bicycleList, LoginSession* session)
    : bicycleList(bicycleList), session(session) {}

// 자전거 ID를 통해 자전거를 조회하고 로그인된 사용자에게 대여 처리한다
// 대여된 자전거의 ID와 제품명을 pair로 반환한다
pair<string, string> RentBicycle::memberRentBicycle(const string& bicycleId) {
    SystemUser* systemUser = session->getLoggedInSystemUser();

    Bicycle* bicycle = bicycleList->findBicycle(bicycleId);

    systemUser->addRentBicycle(bicycle);
    return make_pair(bicycle->getBicycleId(), bicycle->getProductName());
}