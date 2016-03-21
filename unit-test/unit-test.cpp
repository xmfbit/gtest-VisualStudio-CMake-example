#include <stdio.h>
#include "add.h"
#include <gtest/gtest.h>

/* this is a test that can pass*/
TEST(AddTest, CanPass) {
	  EXPECT_EQ(1, add(0, 1));
}

/* make a tast that can not pass*/
TEST(ADDTest, CannotPass) {
	EXPECT_EQ(1, add(0, 0));
}
