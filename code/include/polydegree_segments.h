

#ifndef __PDS__
#define __PDS__

#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <string.h>
#include <stdlib.h>
#include "const.h"

void polydegree_segments( double* r0, double* v0, double deg, double tol, double* Feval, int* seg, int* degree, double* tp, double* Period );

#endif
