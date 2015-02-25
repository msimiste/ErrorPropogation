#ifndef ErrorProp_H
#define ErrorProp_H
#include <cmath>
# pragma once
#endif

namespace ErrorProp{

	void addEprop(double& val1, double& err1, double val2, double err2);
	void exactValEprop(double eVal, double& val1, double& err1);
	void multEprop(double& val1, double& err1, double val2, double err2);
	void expEprop(double& base, double exponent, double& err1);
}; 
