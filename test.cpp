#pragma once
#include "pch.h"
#include"../Project5/OPZ.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class OPZTEST : public ::testing::Test {
protected:
	void SetUp() override {
		Primerchik1.SetOPZ("2 + 3");
		Primerchik1.Calculate();

		Primerchik2.SetOPZ("(2+3)*3-5*3+8/4");
		Primerchik2.Calculate();

		Primerchik3.SetOPZ("2/0");
	

	}

	// void TearDown() override {}

	OPZ Primerchik1;
	OPZ Primerchik2;
	OPZ Primerchik3;
	OPZ Primerchik4;
	//Primerchik.Calculate();
};

TEST_F(OPZTEST, TestAnswer) {

	EXPECT_EQ(Primerchik1.GetResult(),5);
}
TEST_F(OPZTEST, OPZ_Text) {
	EXPECT_EQ(Primerchik1.SetOPZ, "23+3*53*-84/+");
}
TEST_F(OPZTEST, Zero) {
	 try {
		 Primerchik3.Calculate();
			}
			catch (const bool ex) {
				EXPECT_EQ(ex, false);
			}
}