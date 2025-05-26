#pragma once
#include "../control/RentBicycle.h"
#include <fstream>

// 자전거 대여를 담당하는 boundary 클래스
// 사용자의 입력을 받아 자전거 대여 기능을 실행하고 결과를 출력 스트림에 기록한다
class RentBicycleUI {
private:
    // 자전거 대여 로직을 담당하는 컨트롤 객체
    RentBicycle* rentBicycle;

    // 입력 파일 스트림 참조
    ifstream& in;

    // 출력 파일 스트림 참조
    ofstream& out;

public:
    // 컨트롤 객체와 입출력 스트림을 주입받아 초기화한다
    RentBicycleUI(RentBicycle* rentBicycle, ifstream& in, ofstream& out);

    // 사용자로부터 자전거 ID를 입력받아 대여를 수행하고 결과를 출력한다
    void borrowBicycle();
};