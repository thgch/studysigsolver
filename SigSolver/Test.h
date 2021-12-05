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
		float path[] = { 0.0, 1.0 };
		int lenght = ARRAY_LENGTH(path);
		int path_dim = 1;
		int order = 3;
		float* sig1 = new float[sigdim(path_dim, order)];
		float* sig2 = new float[sigdim(path_dim, order)];
		signature(path, lenght, path_dim, order, sig1);
		logSignature(path, lenght, path_dim, order, sig2);

		vector<float> res(sigdim(path_dim, order));
		for (vector<float>::size_type i = 0; i < res.size(); ++i)
			res[i] = sig1[i];
		delete[] sig1;
		delete[] sig2;

		return 1;
	}
};

#endif _TEST_H
