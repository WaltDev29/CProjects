#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h> // MySQL Connector/C 헤더 파일

// 데이터베이스 연결 정보를 정의합니다.
// 실제 환경에 맞게 변경해주세요.
#define DB_HOST "localhost"
#define DB_USER "your_username" // MySQL 사용자 이름
#define DB_PASS "your_password" // MySQL 비밀번호
#define DB_NAME "your_database" // 사용할 데이터베이스 이름

int main() {
    MYSQL* conn;         // MySQL 연결 핸들
    MYSQL_RES* res;      // SQL 쿼리 결과셋
    MYSQL_ROW row;       // 결과셋의 한 행
    MYSQL_FIELD* field;  // 컬럼(필드) 정보

    // MySQL 연결 객체 초기화
    conn = mysql_init(NULL);
    if (conn == NULL) {
        fprintf(stderr, "mysql_init() failed: %s\n", mysql_error(conn));
        return 1;
    }

    // 데이터베이스에 연결
    if (mysql_real_connect(conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 0, NULL, 0) == NULL) {
        fprintf(stderr, "mysql_real_connect() failed: %s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    printf("데이터베이스에 성공적으로 연결되었습니다.\n");

    // SELECT SQL 쿼리 실행
    if (mysql_query(conn, "SELECT 고객아이디, 고객이름, 나이, 등급, 직업, 적립금 FROM 고객")) {
        fprintf(stderr, "SELECT 쿼리 실행 실패: %s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    // 쿼리 결과 가져오기
    res = mysql_store_result(conn);
    if (res == NULL) {
        fprintf(stderr, "mysql_store_result() failed: %s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    // 컬럼(필드) 이름 출력 (헤더)
    int num_fields = mysql_num_fields(res);
    printf("\n");
    for (int i = 0; i < num_fields; i++) {
        field = mysql_fetch_field_nr(res, i);
        printf("%-15s", field->name); // 컬럼 이름을 15칸으로 정렬하여 출력
    }
    printf("\n");
    for (int i = 0; i < num_fields * 15; i++) { // 구분선
        printf("-");
    }
    printf("\n");

    // 결과 행 순회 및 출력
    while ((row = mysql_fetch_row(res)) != NULL) {
        for (int i = 0; i < num_fields; i++) {
            // row[i]가 NULL일 수 있으므로 (예: 나이 컬럼) NULL 처리
            printf("%-15s", row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }

    printf("\n모든 고객 정보를 성공적으로 읽어왔습니다.\n");

    // 결과셋 메모리 해제
    mysql_free_result(res);

    // MySQL 연결 종료
    mysql_close(conn);

    return 0;
}