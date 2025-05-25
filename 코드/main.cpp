// main.cpp
// 프로그램을 실행시키고, 입력 파일에서 명령을 읽어 자전거 대여 서비스를 실행한다.
// 주요 Boudnary 클래스 및 Control 클래스들을 생성한다.

#include <fstream>
#include "mainHeaders.h"

// 입출력 파일의 이름을 정의한다.
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

// doTask 함수는 메뉴 번호(menu1, menu2)를 기준으로 사용자 요청에 따라 자전거 대여 서비스 기능을 실행시킨다.
// 입력 파일을 통해 명령을 받고 각 Boudnary Class 함수를 통해 서비스 기능을 실행한다.
//
// 메뉴 번호 6 1이 입력되면 해당 시스템이 종료된다.
void doTask(ifstream& in_fp, ofstream& out_fp, JoinUI& joinUI, LoginUI& loginUI, LogoutUI& logoutUI,
            AddBicycleUI& addBicycleUI, RentBicycleUI& rentBicycleUI, MemberBicycleListUI& memberBicycleListUI) {

    int menu1 = 0, menu2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {
    
        in_fp >> menu1 >> menu2;

        switch (menu1) {
            case 1:
                if (menu2 == 1) joinUI.signUp(); // 1 1 (회원가입 메뉴)
                break;

            case 2:
                if (menu2 == 1) loginUI.loginRequest(); // 2 1 (로그인 메뉴)
                else if (menu2 == 2) logoutUI.logoutRequest(); // 2 2 (로그아웃 메뉴)
                break;

            case 3:
                if (menu2 == 1) addBicycleUI.createNewBicycle(); // 3 1 (관리자 - 자전거 등록 메뉴)
                break;

            case 4:
                if (menu2 == 1) rentBicycleUI.borrowBicycle(); // 4 1 (회원 - 자전거 대여 메뉴)
                break;

            case 5:
                if (menu2 == 1) memberBicycleListUI.requestMemberRentedBicycles(); // 5 1 (회원 - 자전거 대여 목록 조회 메뉴)
                break;

            case 6:
                if (menu2 == 1) { // 6 1 (시스템 종료 메뉴)
                    out_fp << "6.1. 종료" << endl; 
                    is_program_exit = 1;
                }
                break;
        }
    }
}

// main 함수로, 시스템 전체를 초기화하고 프로그램을 실행한다.
int main() {
    
    // 입출력 파일 스트림 초기화
    ifstream in_fp(INPUT_FILE_NAME);
    ofstream out_fp(OUTPUT_FILE_NAME);

    // 사용자 목록 및 관리자 계정 초기화
    SystemUserList systemUserList;
    SystemUser* admin = new SystemUser("admin", "admin", "010-0000-0000", "admin");
    systemUserList.addMember(admin);

    // Control 객체 생성
    JoinMember joinMember(&systemUserList);
    LoginSession session;
    LoginSystemUser loginSystemUser(&systemUserList, &session);
    LogoutSystemUser logoutSystemUser(&session);
    BicycleList bicycleList;
    AddBicycle addBicycle(&bicycleList, &session);
    RentBicycle rentBicycle(&bicycleList, &session);
    MemberBicycle memberBicycle(&session);

    // Boundary 객체 생성 및 파일 스트림 주입
    JoinUI joinUI(&joinMember, in_fp, out_fp);
    LoginUI loginUI(&loginSystemUser, in_fp, out_fp);
    LogoutUI logoutUI(&session, &logoutSystemUser, out_fp);
    AddBicycleUI addBicycleUI(&addBicycle, in_fp, out_fp);
    RentBicycleUI rentBicycleUI(&rentBicycle, in_fp, out_fp);
    MemberBicycleListUI memberBicycleListUI(&memberBicycle, out_fp);

    // 사용자 명령 수행
    doTask(in_fp, out_fp, joinUI, loginUI, logoutUI,
           addBicycleUI, rentBicycleUI, memberBicycleListUI);

    // 파일 스트림 종료
    in_fp.close();
    out_fp.close();

    return 0;
}