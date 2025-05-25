#include "MemberBicycle.h"
#include <iostream>

// 생성자: 로그인 세션을 통해 사용자 정보를 사용할 수 있도록 설정한다
MemberBicycle::MemberBicycle(LoginSession* session)
    : session(session) {}

// 로그인된 사용자로부터 대여한 자전거 목록을 조회해 반환한다
// 반환되는 목록은 사용자가 대여한 Bicycle 포인터들의 리스트이다
vector<Bicycle*> MemberBicycle::getMemberRentedBicycles() {
    SystemUser* systemUser = session->getLoggedInSystemUser();
    
    vector<Bicycle*> rentedBicycles = systemUser->getRentedBicycles();

    return rentedBicycles;
}