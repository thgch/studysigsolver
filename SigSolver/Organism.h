#pragma once

#ifndef _ORGANISM_H
#define _ORGANISM_H

#include <vector>

using namespace std;


class Organism
{
	std::vector<double> path_;
	std::vector<double> derivatives_;
	int n_points_;
	int max_n_pips_;
	double pip_size_;
	int order_;
	float* plogsig_;

public:
	Organism(int n_points_, int max_n_pips_, double pip_size_, int order);
	Organism(const Organism& other);
	~Organism();
	void add(const Organism& other, Organism& result);
	void mutate(double prob = 0.1);
	void setPath(const std::vector<double>& path);
	double loss(const std::vector<double>& sig, int order);
	void logsig(std::vector<double>& res);

private:
	void random_derivative();
	void randomise();
};

#endif
