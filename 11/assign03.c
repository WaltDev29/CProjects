#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h> // MySQL Connector/C ��� ����

// �����ͺ��̽� ���� ������ �����մϴ�.
// ���� ȯ�濡 �°� �������ּ���.
#define DB_HOST "localhost"
#define DB_USER "your_username" // MySQL ����� �̸�
#define DB_PASS "your_password" // MySQL ��й�ȣ
#define DB_NAME "your_database" // ����� �����ͺ��̽� �̸�

int main() {
    MYSQL* conn;         // MySQL ���� �ڵ�
    MYSQL_RES* res;      // SQL ���� �����
    MYSQL_ROW row;       // ������� �� ��
    MYSQL_FIELD* field;  // �÷�(�ʵ�) ����

    // MySQL ���� ��ü �ʱ�ȭ
    conn = mysql_init(NULL);
    if (conn == NULL) {
        fprintf(stderr, "mysql_init() failed: %s\n", mysql_error(conn));
        return 1;
    }

    // �����ͺ��̽��� ����
    if (mysql_real_connect(conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 0, NULL, 0) == NULL) {
        fprintf(stderr, "mysql_real_connect() failed: %s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    printf("�����ͺ��̽��� ���������� ����Ǿ����ϴ�.\n");

    // SELECT SQL ���� ����
    if (mysql_query(conn, "SELECT �����̵�, ���̸�, ����, ���, ����, ������ FROM ��")) {
        fprintf(stderr, "SELECT ���� ���� ����: %s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    // ���� ��� ��������
    res = mysql_store_result(conn);
    if (res == NULL) {
        fprintf(stderr, "mysql_store_result() failed: %s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    // �÷�(�ʵ�) �̸� ��� (���)
    int num_fields = mysql_num_fields(res);
    printf("\n");
    for (int i = 0; i < num_fields; i++) {
        field = mysql_fetch_field_nr(res, i);
        printf("%-15s", field->name); // �÷� �̸��� 15ĭ���� �����Ͽ� ���
    }
    printf("\n");
    for (int i = 0; i < num_fields * 15; i++) { // ���м�
        printf("-");
    }
    printf("\n");

    // ��� �� ��ȸ �� ���
    while ((row = mysql_fetch_row(res)) != NULL) {
        for (int i = 0; i < num_fields; i++) {
            // row[i]�� NULL�� �� �����Ƿ� (��: ���� �÷�) NULL ó��
            printf("%-15s", row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }

    printf("\n��� �� ������ ���������� �о�Խ��ϴ�.\n");

    // ����� �޸� ����
    mysql_free_result(res);

    // MySQL ���� ����
    mysql_close(conn);

    return 0;
}