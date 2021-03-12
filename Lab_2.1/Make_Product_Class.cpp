#include <stdlib.h>
#include "Make_Product_Class.h"

Product MakeProduct(uns_i value_fir, double value_sec) {
	if (!(value_fir >= 0 && value_sec >= 0))
		exit(-1); //завершення робти

	Product x(value_fir, value_sec);
	return x;
}