#pragma once
#include "../control/ExitSystem.h"
#include <fstream>
using namespace std;

// 프로그램 종료 요청을 처리하는 boundary 클래스
// 종료 메뉴를 통해 사용자 요청을 받고 종료 메시지를 출력한다
class ExitUI {
private:
    // 종료 로직을 처리하는 컨트롤 객체
    ExitSystem* exitSystem;

    // 출력 스트림 (결과 메시지 출력용)
    ofstream& out;

public:
    // 컨트롤 객체와 출력 스트림을 주입받아 boundary 객체를 초기화한다
    ExitUI(ExitSystem* exitSystem, ofstream& out);

    // 종료 요청을 처리하고, 프로그램 종료 여부를 반환한다
    bool requestExit();
};