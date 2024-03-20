#include "pch.h"
#include "CppUnitTest.h"
#include "../2.5/Pair.h"
#include "../2.5/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair p(2, 3);
			Assert::AreEqual(2.0, p.getFirst());
			Assert::AreEqual(3.0, p.getSecond());
		}
	};
}
