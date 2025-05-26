#pragma once
#include <fstream>
#include "../control/JoinMember.h"

// 회원가입 요청을 처리하는 boundary 클래스
// 사용자 입력을 받아 회원가입 컨트롤러를 호출하고, 결과를 출력 스트림에 기록한다
class JoinUI {
private:
    // 회원가입 로직을 담당하는 컨트롤 객체
    JoinMember* joinMember;

    // 사용자 입력을 읽어오는 입력 스트림 참조
    ifstream& in;

    // 결과를 기록하는 출력 스트림 참조
    ofstream& out;

public:
    // 회원가입 컨트롤 객체와 입출력 스트림을 주입받아 초기화한다
    JoinUI(JoinMember* joinMember, ifstream& in, ofstream& out);

    // 사용자로부터 ID, 비밀번호, 전화번호를 입력받아 회원가입을 처리한다
    void signUp();
};