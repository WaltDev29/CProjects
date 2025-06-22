#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"  // SQLite3 헤더
#include <direct.h>

#define DB_FILE "D:/WaltDev29/C/11/shopdb.sqlite"  // SQLite DB 파일명

int main() {
    sqlite3* db;
    sqlite3_stmt* stmt;
    const char* sql = "SELECT * FROM 주문";

    // 데이터베이스 열기
    if (sqlite3_open(DB_FILE, &db) != SQLITE_OK) {
        fprintf(stderr, "데이터베이스 열기 실패: %s\n", sqlite3_errmsg(db));
        return 1;
    }

    printf("데이터베이스에 성공적으로 연결되었습니다.\n");

    char cwd[1024];
    _getcwd(cwd, sizeof(cwd));
    printf("현재 작업 디렉토리: %s\n", cwd);

    // SQL 쿼리 준비
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK) {
        fprintf(stderr, "쿼리 준비 실패: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }

    // 컬럼 이름 출력
    int num_cols = sqlite3_column_count(stmt);
    printf("\n");
    for (int i = 0; i < num_cols; i++) {
        printf("%-15s", sqlite3_column_name(stmt, i));
    }
    printf("\n");
    for (int i = 0; i < num_cols * 15; i++) printf("-");
    printf("\n");

    // 결과 출력
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        for (int i = 0; i < num_cols; i++) {
            const unsigned char* value = sqlite3_column_text(stmt, i);
            printf("%-15s", value ? (const char*)value : "NULL");
        }
        printf("\n");
    }

    printf("\n모든 고객 정보를 성공적으로 읽어왔습니다.\n");

    // 자원 해제
    sqlite3_finalize(stmt);
    sqlite3_close(db);

    return 0;
}
