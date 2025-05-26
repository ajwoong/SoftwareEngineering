#pragma once
#include "../control/MemberBicycle.h"
#include <fstream>

// 로그인된 사용자가 대여한 자전거 목록을 출력하는 boudnary 클래스
class MemberBicycleListUI {
private:
    // 대여 목록을 조회하는 컨트롤 객체
    MemberBicycle* memberBicycle;

    // 출력 파일 스트림 참조
    ofstream& out;

public:
    // 컨트롤 객체와 출력 스트림을 주입받아 초기화한다
    MemberBicycleListUI(MemberBicycle* memberBicycle, ofstream& out);

    // 로그인된 사용자의 대여 자전거 목록을 요청하고 출력한다
    void requestMemberRentedBicycles();
};