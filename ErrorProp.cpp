
#include "ErrorProp.h"

namespace ErrorProp
 {
	 /* calculates the addtion of 2 values with error propogation
	 requires 4 parameters of type double
	 */
	void addEprop(double& val1, double& err1, double val2, double err2)
	{				
		val1 = val1 + val2;		
		err1 =sqrt(pow(err1,2.0)+pow(err2,2.0));
	}

	/* calculates the multiplication of 2 values with error propogation
	requires 4 parameters of type double
	*/
	void multEprop(double& val1, double& err1, double val2, double err2)
	{		
		double Q = 1;		
		Q = abs(val1*val2);	
		err1 = Q*sqrt(pow((err1 / val1), 2.0) + pow((err2 / val2), 2.0));
		val1 = Q;			
	}

	/* calculates the exponentiaion of a values with error propogation
	requires 3 parameters of type double
	*/
	void expEprop(double& base, double exp, double& err1)
	{
		double Q = 0;
		double err = 0;
		Q = pow(base, exp);
		err1 = (abs(Q)) * (abs(exp)) * (err1 / base);
		base = Q;
	} 

	/* calculates the multiplication of 2 values with error propogation
	one value is an exact value with no associated error
	requires 3 parameters of type double
	*/
	void exactValEprop(double eVal, double& val1, double& err1)
	{
		double Q = abs( eVal * val1);
		double absOfval1 = abs(val1);
		err1 = Q*(err1 / absOfval1);
		val1 = Q;	
	}
}