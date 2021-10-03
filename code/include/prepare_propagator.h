

#ifndef __PP__
#define __PP__

#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <string.h>
#include <stdlib.h>
#include "const.h"

void prepare_propagator(double* r0, double* v0, double t0, double t_final, double dt, double tp, double tol,
  int N, int M, int seg, int* prep_HS, double* t_orig, double* tvec, double* P1, double* P2, double* T1, double* T2, double* A, double* Ta);

#endif
