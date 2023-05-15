/*
 * @Author: yangweiguang yangweiguang@uniml.com
 * @Date: 2023-05-15 12:54:41
 * @LastEditors: yangweiguang yangweiguang@uniml.com
 * @LastEditTime: 2023-05-15 13:35:41
 * @FilePath: /study_c/main.c
 * @Description:
 *
 * Copyright (c) 2023 by GuangjiTech, All Rights Reserved.
 */
#include <stdio.h>
#include <string.h>

struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30]; // String
};

int main()
{
    struct myStructure s1;

    // Assign a value to the string using the strcpy function
    strcpy(s1.myString, "Some text");

    // Print the value
    printf("My string: %s", s1.myString);

    return 0;
}