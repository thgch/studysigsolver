#include "pch.h"
#include "CppUnitTest.h"
#include "../SigSolver/Test.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestSigSolver
{
	TEST_CLASS(TestSigSolver)
	{
	public:
		TEST_METHOD(TestMethod2)
		{
			Test::calc_signature();
		}
	};
}
