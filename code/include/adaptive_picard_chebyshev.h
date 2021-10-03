

#ifndef __APC__
#define __APC__

#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <string.h>
#include <stdlib.h>
#include "const.h"

void adaptive_picard_chebyshev(double* r0,double* v0, double t0, double tf, double dt, double deg, double tol, int soln_size, double* Soln, double* Feval);

#endif
