#pragma once
#include <string>
#include <vector>
#include "Bicycle.h"
#include "RentedBicycleCollection.h"
using namespace std;


// SystemUser 클래스는 시스템에 등록된 사용자 한 명을 가르키는 클래스이다.
// 사용자 ID, 비밀번호, 전화번호, 역할 정보를 보유하며, 회원이 대여한 자전거 리스트를 관리한다.
class SystemUser {
private:
    string id; // 사용자 아이디
    string password; // 사용자 비밀번호
    string phone; // 사용자 전화번호
    string role; // 회원, 관리자 역할 정보
    RentedBicycleCollection rentedBicycleCollection; // 회원이 대여한 자전거 리스트

public:
    // SystemUser 객체 생성자 함수이다.
    SystemUser(const string& id, const string& password,
               const string& phone, const string& role);

    
    // 회원이 자전거를 대여했을 때 회원의 자전거 대여 리스트에 자전거를 추가하는 함수이다.
    void addRentBicycle(Bicycle* bicycle);

    // 사용자가 대여한 자전거들의 목록을 반환한다.(ID 순 정렬).
    vector<Bicycle*> getRentedBicycles();

    // 사용자 ID를 반환한다.
    string getSystemUserId();

    // 사용자 비밀번호를 반환한다.
    string getSystemUserPassword();

    // 사용자 역할(admin, member)을 반환한다.
    string getSystemUserRole();
};