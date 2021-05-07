#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1();
void filestat2();
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main(){
    filestat1();
    filestat2();
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(){
    
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(){
    
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(){
    
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){
    
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(){
    
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(){
    printf("size compare\n");
    
    if      (stat1.st_blocks > stat2.st_blocks) printf("text1 is bigger\n\n");
    else if (stat1.st_blocks < stat2.st_blocks) printf("text2 is bigger\n\n");
    else                                        printf("sizes are equal\n\n");
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(){
    printf("date compare\n");

    // 달 먼저 비교
    if      (time1->tm_mon < time2->tm_mon)     printf("text1 is early\n\n");
    else if (time1->tm_mon > time2->tm_mon)     printf("text2 is early\n\n");
    // 날짜 비교
    else if (time1->tm_mday < time2->tm_mday)   printf("text1 is early\n\n");
    else if (time1->tm_mday > time2->tm_mday)   printf("text2 is early\n\n");
    else                                        printf("same date\n\n");
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(){
    printf("time compare\n");

    // 시간 먼저 비교
    if      (time1->tm_hour < time2->tm_hour)   printf("text1 is early\n");
    else if (time1->tm_hour > time2->tm_hour)   printf("text2 is early\n");
    // 분 비교
    else if (time1->tm_min < time2->tm_min)     printf("text1 is early\n");
    else if (time1->tm_min > time2->tm_min)     printf("text2 is early\n");
    else                                        printf("same date\n");
}