

#ifndef __ECI__
#define __ECI__

#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <string.h>
#include <stdlib.h>
#include "const.h"

void eci2ecef(double t, double* X, double* V, double* xB, double* vB);

#endif
