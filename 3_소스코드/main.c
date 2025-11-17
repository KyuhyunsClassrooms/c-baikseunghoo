#include <stdio.h>

/*
    1. [설계]에서 정의한 변수, 배열, (필요하면) 구조체를 여기에 선언하세요.
    
    struct Student {
        char name[50]     
        int attend;
        int totalClass;
        int excused;
        double rate;
    };
    
    struct Student s;
*/


/*
    2. [알고리즘]에서 설계한 핵심 기능 함수들을 여기에 선언하세요.
*/

#include <stdio.h>

int main() {

    // 이름, 출석일수, 총 수업일수, 인정 결석일수, 출석률을 저장
    struct Student {
        char name[50]     
        int attend;
        int totalClass;
        int excused;
        double rate;
    };

    // 구조체 변수 선언(한 명의 학생 정보를 저장)
    struct Student s;
    int standard;  // 기준 출석률

    printf("학생 이름을 입력하세요: ");
    scanf("%s", s.name);

    printf("총 수업 일수를 입력하세요: ");
    scanf("%d", &s.totalClass);

    printf("출석 일수를 입력하세요: ");
    scanf("%d", &s.attend);

    char answer;

    printf("출석 인정 결석이 있습니까? (y/n): ");
    scanf(" %c", &answer);

    // 조건에 따라 인정 결석 일수 입력
    if (answer == 'y' || answer == 'Y') {
        printf("출석 인정 결석 일수를 입력하세요: ");
        scanf("%d", &s.excused);
    } else {
        s.excused = 0;  // 인정 결석 없음
    }

    // 출석률 계산
    // (출석일수 + 인정결석일수) / 총 수업일수 × 100
    s.rate = (s.attend + s.excused) / total * 100;

    // 기준 출석률 입력
    printf("기준 출석률을 입력하세요: ");
    scanf("%d", &standard);

    // 출석률이 기준 이상인지 판정
    if (s.rate = standard) {
        printf("이수\n");
    } else {
        printf("미이수\n");
    }

    return 0;
}