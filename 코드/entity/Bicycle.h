#pragma once
#include <string>
#include <vector>
using namespace std;

// 자전거 정보를 표현하는 클래스
// 자전거 ID와 제품명을 저장하고 조회하는 기능을 제공한다
class Bicycle {
private:
    // 자전거 ID
    string id;

    // 자전거 제품명
    string productName;

public:
    // Bicycle 객체 생성자 함수이다
    Bicycle(const string& id, const string& productName);

    // 자전거 ID를 반환한다
    string getBicycleId();

    // 자전거 제품 이름을 반환한다
    string getProductName();
};