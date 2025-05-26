#pragma once

// 프로그램 종료 처리를 담당하는 컨트롤 클래스
class ExitSystem {
public:
    // 종료를 수행하고 종료 신호(true)를 반환한다
    bool exit();
};