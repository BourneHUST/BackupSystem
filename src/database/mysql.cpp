#include <stdio.h>
#include <stdlib.h>  
#include <string.h>  
#include <mysql/mysql.h> 

#define MYSQL_HOST "localhost"
#define MYSQL_USER "root"
#define MYSQL_PASSWD "woshiqiqi"
#define DB_NAME "sakila"
#define TABLE_NAME "students"

/* 连接mysql */  
void mysql_connect(MYSQL *mysql)
{  
    if(!mysql_real_connect(mysql, MYSQL_HOST, MYSQL_USER, MYSQL_PASSWD, DB_NAME, 3306, NULL, 0)) {  
        printf("Failed to connect:%s\n", mysql_error(mysql));  
    } else {
       printf("Connect sucessfully!\n"); 
    }
}

/* 断开mysql连接 */ 
void mysql_disconnect(MYSQL *mysql)
{
    mysql_close(mysql);
}

int main(void) {
    // 初始化mysql
    MYSQL *mysql_conn = mysql_init(NULL);           
    if (!mysql_conn) {
        printf("Mysql init failed.\n");
    }
    mysql_connect(mysql_conn);
    mysql_disconnect(mysql_conn);
    return 0;
}