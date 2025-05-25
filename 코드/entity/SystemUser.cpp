#include "SystemUser.h"
using namespace std;

// SystemUser 객체 생성자 함수이다.
SystemUser::SystemUser(const string& id, const string& password,
                       const string& phone, const string& role)
    : id(id), password(password), phone(phone), role(role) {}

// 회원이 자전거를 대여했을 때 회원의 자전거 대여 리스트에 자전거를 추가하는 함수이다.
void SystemUser::addRentBicycle(Bicycle* bicycle){
    rentedBicycleCollection.rentBicycle(bicycle);
}

// 사용자가 대여한 자전거들의 목록을 반환한다.(ID 순 정렬).
vector<Bicycle*> SystemUser::getRentedBicycles(){
    return rentedBicycleCollection.getAll();
}

 // 사용자 ID를 반환한다.
string SystemUser::getSystemUserId()  {
    return id;
}

 // 사용자 비밀번호를 반환한다.
string SystemUser::getSystemUserPassword() {
    return password;
}

// 사용자 역할(admin, member)을 반환한다.
string SystemUser::getSystemUserRole()   {
    return role;
}