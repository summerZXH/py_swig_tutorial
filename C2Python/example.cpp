/*
 * example.c
 * Copyright (C) 2018 xiuhongzhu <xiuhongzhu@TENCENT64.site>
 *
 */


#include <time.h>
#inclue <vector>

double My_variable = 3.0;
  
int fact(int n) {
    if (n <= 1) return 1;
    else return n*fact(n-1);
}
 
int my_mod(int x, int y) {
    return (x%y);
}
    
char *get_time(){
    time_t ltime;
    time(&ltime);
    return ctime(&ltime);
}
 
