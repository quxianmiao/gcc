/* { dg-do compile } */
/*  {  dg-skip-if  "test is specific to ck810"  { csky-*-* }  { "*" }  { "-mcpu=ck810*v*"  }  }  */
/*  {  dg-skip-if  ""  { csky-*-* }  { "-mvdsp-width=64" }  { " "  }  }  */
/* { dg-options " -mvdsp-width=128  -O2" } */

unsigned int func(__simd128_uint8_t b)
{
  char *a=(char *)&b;
  return (unsigned int)(a[7]);

}
/* { dg-final { scan-assembler "vmfvr\.u8" } }*/
