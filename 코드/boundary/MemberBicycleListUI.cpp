#include "MemberBicycleListUI.h"

// 생성자: 컨트롤 객체와 출력 스트림을 받아 boundary 객체를 초기화한다
MemberBicycleListUI::MemberBicycleListUI(MemberBicycle* memberBicycle, ofstream& out)
    : memberBicycle(memberBicycle), out(out) {}

// 로그인된 사용자의 자전거 대여 목록을 받아 출력한다
void MemberBicycleListUI::requestMemberRentedBicycles() {
    out << "5.1. 자전거 대여 리스트" << endl;

    // 대여한 자전거 목록을 조회
    vector<Bicycle*> rentedBicycles = memberBicycle->getMemberRentedBicycles();

    // 자전거 정보를 출력 포맷에 맞게 출력
    for (Bicycle* bicycle : rentedBicycles) {
        out << "> " << bicycle->getBicycleId() << " " << bicycle->getProductName() << endl;
    }

    out << endl;
}