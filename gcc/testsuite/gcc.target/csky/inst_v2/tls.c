
/* { dg-do compile } */
/* { dg-skip-if "Support thread-local storage" { csky-*-* } { "-march=*" } { "-march=ck807" "-march=ck810" } }  */

static __thread int a = 2;

void func(void)
{
  a = 1;
}

/* { dg-final { scan-assembler "\.tdata"} } */
/* { dg-final { scan-assembler "jbsr\t__read_tp"} } */
/* { dg-final { scan-assembler "lrw\t.+@TPOFF\n"} } */
