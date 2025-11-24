#include <stdio.h>

int main() {

    // 학생 정보를 저장하는 구조체 정의
    struct Student {
        char name[50];     // 학생 이름
        int attend;        // 출석 일수
        int totalClass;    // 총 수업 일수
        int excused;       // 출석 인정 결석 일수
        double rate;       // 계산된 출석률
    };

    struct Student s;       // 한 명의 학생 정보를 저장할 구조체 변수
    int standard;           // 기준 출석률
    char answer;            // 인정 결석 여부 입력용 변수

    printf("학생 이름을 입력하세요: ");
    scanf("%s", s.name);

    printf("총 수업 일수를 입력하세요: ");
    scanf("%d", &s.totalClass);

    printf("출석 일수를 입력하세요: ");
    scanf("%d", &s.attend);

    printf("출석 인정 결석이 있습니까? (y/n): ");
    scanf(" %c", &answer);

    if (answer == 'y' || answer == 'Y') {
        printf("출석 인정 결석 일수를 입력하세요: ");
        scanf("%d", &s.excused);
    } 
    else {
        s.excused = 0;
    }

    // 출석률 계산 (출석 + 인정 결석) / 총 수업 * 100
    s.rate = (double)(s.attend + s.excused) / s.totalClass * 100;

    printf("기준 출석률을 입력하세요: ");
    scanf("%d", &standard);

    // 계산된 출석률이 기준 이상인지 판정 후 출력
    if (s.rate >= standard) {
        printf("이수\n");
    } else {
        printf("미이수\n");
    }

    return 0;
}