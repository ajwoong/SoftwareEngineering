#pragma once
#include <fstream>
#include "../control/AddBicycle.h"

// 자전거 등록 기능을 담당하는 boundary 클래스
// 사용자 입력을 받아 자전거 등록 컨트롤 객체를 호출하고 결과를 출력한다
class AddBicycleUI {
private:
    // 자전거 등록 로직을 처리하는 컨트롤 객체
    AddBicycle* addBicycle;

    // 입력 스트림 (파일 입력)
    ifstream& in;

    // 출력 스트림 (파일 출력)
    ofstream& out;

public:
    // 컨트롤 객체 및 입출력 스트림을 주입받아 초기화한다
    AddBicycleUI(AddBicycle* addBicycle, ifstream& in, ofstream& out);

    // 사용자 입력을 바탕으로 새로운 자전거를 등록하고 결과를 출력한다
    void createNewBicycle();
};