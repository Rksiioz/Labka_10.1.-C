#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include <fstream>
#include "../Laba 10.1 C/Laba 10.1 C.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fileName[10] = "1.txt";

			bool result = Find(fileName);

			Assert::AreEqual(result, false);
		}
	};
}
