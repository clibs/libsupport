#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <locale.h>
#include "libsupport.h"

double D_PNAN;
double D_NNAN;
double D_PINF;
double D_NINF;
float  F_PNAN;
float  F_NNAN;
float  F_PINF;
float  F_NINF;

int locale_is_utf8;

void libsupport_init(void)
{
    locale_is_utf8 = u8_is_locale_utf8(setlocale(LC_ALL, ""));

    ios_init_stdstreams();

    D_PNAN = strtod("+NaN",NULL);
    D_NNAN = -strtod("+NaN",NULL);
    D_PINF = strtod("+Inf",NULL);
    D_NINF = strtod("-Inf",NULL);
    F_PNAN = strtof("+NaN",NULL);
    F_NNAN = -strtof("+NaN",NULL);
    F_PINF = strtof("+Inf",NULL);
    F_NINF = strtof("-Inf",NULL);
}
