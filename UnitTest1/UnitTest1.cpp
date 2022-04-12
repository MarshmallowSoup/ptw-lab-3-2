#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.2/lab3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int i = 1;
			Student s[i];

			s[0].spec = CS;
			s[0].physics = 4;
			s[0].math = 4;
			s[0].progr = 4;
			
			double expValue = 4;
			double actValue = avgGrade(s, 0);
			
			Assert::AreEqual(expValue, actValue);
		}
	};
}
