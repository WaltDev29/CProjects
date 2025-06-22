#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"  // SQLite3 ���
#include <direct.h>

#define DB_FILE "D:/WaltDev29/C/11/shopdb.sqlite"  // SQLite DB ���ϸ�

int main() {
    sqlite3* db;
    sqlite3_stmt* stmt;
    const char* sql = "SELECT * FROM �ֹ�";

    // �����ͺ��̽� ����
    if (sqlite3_open(DB_FILE, &db) != SQLITE_OK) {
        fprintf(stderr, "�����ͺ��̽� ���� ����: %s\n", sqlite3_errmsg(db));
        return 1;
    }

    printf("�����ͺ��̽��� ���������� ����Ǿ����ϴ�.\n");

    char cwd[1024];
    _getcwd(cwd, sizeof(cwd));
    printf("���� �۾� ���丮: %s\n", cwd);

    // SQL ���� �غ�
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK) {
        fprintf(stderr, "���� �غ� ����: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }

    // �÷� �̸� ���
    int num_cols = sqlite3_column_count(stmt);
    printf("\n");
    for (int i = 0; i < num_cols; i++) {
        printf("%-15s", sqlite3_column_name(stmt, i));
    }
    printf("\n");
    for (int i = 0; i < num_cols * 15; i++) printf("-");
    printf("\n");

    // ��� ���
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        for (int i = 0; i < num_cols; i++) {
            const unsigned char* value = sqlite3_column_text(stmt, i);
            printf("%-15s", value ? (const char*)value : "NULL");
        }
        printf("\n");
    }

    printf("\n��� �� ������ ���������� �о�Խ��ϴ�.\n");

    // �ڿ� ����
    sqlite3_finalize(stmt);
    sqlite3_close(db);

    return 0;
}
