/*************************************************************************
	> File Name: unit-test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年04月02日 星期六 13时27分37秒
 ************************************************************************/

#include "gtest/gtest.h"
#include "add.h"

TEST(AddTest, Right) {
    int a = 1, b = 2;
    EXPECT_EQ(add(a, b), a + b);
}

TEST(AddTest, Wrong) {
    int a = 1, b = 2;
    EXPECT_EQ(add(a, b), a + b + 1);
}

