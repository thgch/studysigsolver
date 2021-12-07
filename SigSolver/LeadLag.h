#pragma once

#ifndef _LEAD_LAG_H
#define _LEAD_LAG_H

#include <vector>

using namespace std;

class LeadLag
{
public:
	static void compute(const vector<double>& org, vector<vector<double>>& res)
	{
		vector<double>::size_type n_res = 2 * org.size() - 1;
		if (res.size() != n_res) {
			res.resize(n_res);
			for (vector<double>::size_type i = 0; i < n_res; ++i) {
				res[i].resize(2);
			}
		}

		for (vector<double>::size_type i = 0; i < org.size() - 1; ++i)
		{
			auto val_lag = org[i];
			auto val_lead = org[i + 1];

			res[2 * i][0] = val_lag;
			res[2 * i][1] = val_lag;
			res[2 * i + 1][0] = val_lag;
			res[2 * i + 1][1] = val_lead;
		}

		vector<double>::size_type idx_last = org.size() - 1;
		double val_last = org[idx_last];
		res[2 * idx_last][0] = val_last;
		res[2 * idx_last][1] = val_last;
	}
};

#endif
