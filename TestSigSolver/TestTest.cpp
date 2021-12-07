#include "pch.h"
#include <vector>
#include "CppUnitTest.h"
#include "../SigSolver/Test.h"
#include "../SigSolver/LeadLag.h"

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestSigSolver
{
	TEST_CLASS(TestSigSolver)
	{
	public:
		TEST_METHOD(TestSignature)
		{
			Test::calc_signature();
		}

		TEST_METHOD(TestLeadLag)
		{
			vector<double> org = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0};
			vector<vector<double>> res;
			LeadLag::compute(org, res);
		}
	};
}
