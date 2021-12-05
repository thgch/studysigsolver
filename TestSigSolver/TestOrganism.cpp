#include "pch.h"
#include "CppUnitTest.h"
#include "../SigSolver/Organism.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestSigSolver
{
	TEST_CLASS(TestSigSolver)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int act = Organism::myadd(1, 2);
			Assert::AreEqual(3, act);
		}
	};
}
