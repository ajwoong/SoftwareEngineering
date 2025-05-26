#include "ExitUI.h"

// 생성자: 종료 컨트롤 객체와 출력 스트림을 초기화한다
ExitUI::ExitUI(ExitSystem* exitSystem, ofstream& out)
    : exitSystem(exitSystem), out(out) {}

// 종료 메시지를 출력한다.
// true를 반환하면 프로그램이 종료된다
bool ExitUI::requestExit() {
    out << "6.1. 종료" << endl;
    return exitSystem->exit();
}