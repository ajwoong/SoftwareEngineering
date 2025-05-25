#include "Bicycle.h"

// Bicycle 객체 생성자 함수이다
Bicycle::Bicycle(const string& id, const string& productName)
    : id(id), productName(productName) {}

// 자전거 ID를 반환한다
string Bicycle::getBicycleId() {
    return id;
}

// 자전거 제품명을 반환한다
string Bicycle::getProductName() {
    return productName;
}