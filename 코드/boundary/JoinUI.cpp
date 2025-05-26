#include "JoinUI.h"

// 생성자: 회원가입 컨트롤 객체와 입출력 스트림을 받아 boundary 객체를 초기화한다
JoinUI::JoinUI(JoinMember* joinMember, ifstream& in, ofstream& out)
    : joinMember(joinMember), in(in), out(out) {}

// 사용자로부터 ID, 비밀번호, 전화번호를 입력받고
// 회원가입 컨트롤러를 통해 사용자 등록을 수행한 후, 결과를 출력한다
void JoinUI::signUp() {
    string id, password, phone;
    in >> id >> password >> phone;

    // 입력된 정보로 회원가입 요청
    joinMember->join(id, password, phone);

    // 회원가입 완료 메시지 출력
    out << "1.1. 회원가입\n";
    out << "> " << id << " " << password << " " << phone << "\n" << endl;
}