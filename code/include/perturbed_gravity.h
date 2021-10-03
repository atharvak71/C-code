

#ifndef __PERT__
#define __PERT__

#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <string.h>
#include <stdlib.h>
#include "const.h"

void perturbed_gravity(double t, double* Xo, double err, int ii, int N, double deg, int hot, double* G, double tol, int* itr, double* Feval);

void Grav_Approx(double t, double* X, double* dX, double* Feval);

void Grav_Full(double t, double* Xo, double* acc, double tol, double deg, double* Feval);

#endif
