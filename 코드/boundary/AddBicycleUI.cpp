#include "AddBicycleUI.h"

// 생성자: 자전거 등록 컨트롤 객체와 입출력 스트림을 초기화한다
AddBicycleUI::AddBicycleUI(AddBicycle* addBicycle, ifstream& in, ofstream& out)
    : addBicycle(addBicycle), in(in), out(out) {}

// 사용자로부터 자전거 ID와 제조사를 입력받아 등록 요청을 처리하고 결과를 출력한다
void AddBicycleUI::createNewBicycle() {
    string bicycleId, productName;
    in >> bicycleId >> productName;

    // 자전거 등록 요청을 컨트롤러에 전달
    addBicycle->addNewBicycle(bicycleId, productName);

    // 등록 결과를 출력 형식에 맞게 기록
    out << "3.1. 자전거 등록" << endl;
    out << "> " << bicycleId << " " << productName << "\n" << endl;
}