//
// Created by 刘凡 on 2021/3/30.
//
#include <stdio.h>
#include <string.h>
#include "sds.h"

int main(int argc, char **argv) {
    printf("sss\n");
    char *s = "1234\0 456";
    sds sds1 = sdsnewlen(s,9);
    printf("%s\n",s);
    printf("%lu\n", strlen(s));
    printf("%d\n", sdslen(sds1));
    printf("%c",sds1[7]);
    printf("%c",s[7]);
    return 0;
}

