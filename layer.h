#ifndef layer_h
#define layer_h
#include "activation/functions.h"

class Matrix;


class Layer {
public:

	Matrix* weights{};
	Matrix* deltaWeightSum{};
	Matrix* previousWeight{};

	double* biases;
	double* deltaBiasSum;
	
	double* neurons;

	Activation func;

	unsigned long nodeCount;
	 
	Layer(unsigned long nodeCount,  Activation func);

};

#endif
