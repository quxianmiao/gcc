/* { dg-do compile } */
/*  {  dg-skip-if  "test is specific to the instruction v1"  { csky-*-* }  { "-march=*" }  { "-march=ck\[56\]*"  }  }  */
/* { dg-final { scan-assembler "\tbseti\t\[^\n\]*, 28" } }*/

int or(int a)
{
	return a | 0x10000000;
}
