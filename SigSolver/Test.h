#pragma once

#ifndef _TEST_H
#define _TEST_H

#include <vector>
#include "signature.h"
#define ARRAY_LENGTH(a) (sizeof(a)/sizeof(a[0]))

using namespace std;

class Test
{
public:
	static int calc_signature()
	{
		float path[] = { 0.0, 2.0, 1.0, 4.0 };
		int lenght = ARRAY_LENGTH(path);
		int path_dim = 1;
		int order = 3;

		float* sig = new float[sigdim(path_dim, order)];
		signature(path, lenght, path_dim, order, sig);
		vector<float> res_sig(sigdim(path_dim, order));
		for (vector<float>::size_type i = 0; i < res_sig.size(); ++i)
			res_sig[i] = sig[i];
		
		float* logsig = new float[logsigdim(path_dim, order)];
		logSignature(path, lenght, path_dim, order, logsig);
		vector<float> res_logsig(logsigdim(path_dim, order));
		for (vector<float>::size_type i = 0; i < res_logsig.size(); ++i)
			res_logsig[i] = logsig[i];
		
		delete[] sig;
		delete[] logsig;
		return 1;
	}
};

#endif
