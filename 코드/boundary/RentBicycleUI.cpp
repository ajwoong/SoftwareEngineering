#include "RentBicycleUI.h"

// 생성자: 자전거 대여 컨트롤 객체와 입출력 스트림을 받아 boundary 객체를 초기화한다
RentBicycleUI::RentBicycleUI(RentBicycle* rentBicycle, ifstream& in, ofstream& out)
    : rentBicycle(rentBicycle), in(in), out(out) {}

// 자전거 ID를 입력받아 대여 요청을 수행하고 결과를 출력한다
void RentBicycleUI::borrowBicycle() {
    string bicycleId;
    in >> bicycleId;

    // 자전거 ID를 전달하여 대여 처리 후 결과 정보(ID, 제품명) 반환
    pair<string, string> result = rentBicycle->memberRentBicycle(bicycleId);

    // 출력 포맷에 맞춰 결과 기록
    out << "4.1. 자전거 대여" << endl;
    out << "> " << result.first << " " << result.second << "\n" << endl;
}