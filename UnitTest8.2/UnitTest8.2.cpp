#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofia8.2/ChyrunSofia8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char str[10] = "sabd hkv.";
			t = MinLength(str);
			Assert::AreEqual(t, 3);
		}
	};
}
