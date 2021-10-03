

#ifndef __PI__
#define __PI__

#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <string.h>
#include <stdlib.h>
#include "const.h"

void picard_iteration(double* Xint, double* Vint, double* X, double* V, double* times, int N, int M, double deg, int hot, double tol,
  double* P1, double* P2, double* T1, double* T2, double* A, double* Feval, double* Alpha, double* Beta);

#endif
