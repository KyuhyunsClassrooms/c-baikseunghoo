#include <stdio.h>

int main() {

    // 이름, 출석일수, 총 수업일수, 인정 결석일수, 출석률을 저장하는 구조체
    struct Student {
        char name[50];     // 학생 이름
        int attend;        // 출석 일수
        int totalClass;    // 총 수업 일수
        int excused;       // 출석 인정 결석 일수
        double rate;       // 출석률
    };

    struct Student s;       // 구조체 변수 선언
    int standard;           // 기준 출석률

    printf("학생 이름을 입력하세요: ");
    scanf("%s", s.name);

    printf("총 수업 일수를 입력하세요: ");
    scanf("%d", &s.totalClass);

    printf("출석 일수를 입력하세요: ");
    scanf("%d", &s.attend);

    char answer;

    printf("출석 인정 결석이 있습니까? (y/n): ");
    scanf(" %c", &answer);

    if (answer == 'y' || answer == 'Y') {
        printf("출석 인정 결석 일수를 입력하세요: ");
        scanf("%d", &s.excused);
    } else {
        s.excused = 0;  // 인정 결석 없음
    }

    // 정상 계산식 (총 수업 일수는 s.totalClass)
    s.rate = (double)(s.attend + s.excused) / s.totalClass * 100;

    printf("기준 출석률을 입력하세요(퍼센트): ");
    scanf("%d", &standard);

    // 정상 비교 연산자 (>= 기준 이상이면 이수)
    if (s.rate >= standard) {
        printf("이수\n");
    } else {
        printf("미이수\n");
    }

    return 0;
}
