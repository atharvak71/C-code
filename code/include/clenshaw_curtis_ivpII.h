

#ifndef __CC__
#define __CC__

#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <string.h>
#include <stdlib.h>
#include "const.h"

void clenshaw_curtis_ivpII( int N, int M, double* T2, double* P2, double* T1, double* P1, double* Ta, double* A );

#endif
