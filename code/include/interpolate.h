

#ifndef __INT__
#define __INT__

#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <string.h>
#include <stdlib.h>
#include "const.h"

void interpolate(double* ALPHA, double* BETA, int soln_size, int coeff_size, int N, double* segment_times,
  double* W1, double* W2, double t0, double tf, double dt, int total_seg, double* Soln);

#endif
