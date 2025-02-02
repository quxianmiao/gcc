/*
 * main.c: hard double float point "|*|" testing for FPU V1.0
 *
 * Copyright (C) 2009 Hangzhou C-SKY Microsystems co,. ltd.
 *
 */
/* { dg-do compile } */
/*  {  dg-skip-if  "test is specific to the instruction fpv v1.0"  { csky-*-* }  { "-march=*" }  { "-march=ck\[68\]*"  }  }  */
/* { dg-options { -O2 -fno-inline  -mhard-float } } */
/* { dg-final { scan-assembler "fsitod\tfr\[0-9\]*, fr\[0-9\]*, r\[0-9\]*"  } }*/

#include "math.h"

#define F_TYPE double

   F_TYPE fresult = 0;
long fadd1 = 987;

#define PASS 0
#define FAIL 1

void fsitod_test(F_TYPE *fres, long fsrc1)
{
  F_TYPE temp;

  temp = (F_TYPE)fsrc1;
  *fres = temp;
}



int main (int argc, char **argv)
{
 fsitod_test(&fresult, fadd1);
 return 0;
}
