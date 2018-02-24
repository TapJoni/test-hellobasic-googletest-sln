//// UnitTestCubicGoogleTest2.cpp : Defines the entry point for the console application.
////
//
#include "stdafx.h"
//
//
//int main()
//{
//    return 0;
//}
//

// unittest_SimpleMath.cpp : Defines the entry point for the console application.

#include "gtest/gtest.h"
#include "cubicMath.h"

TEST(testMath, myCubeTest)
{
	EXPECT_EQ(1000, cubic(10));
}