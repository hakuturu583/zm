/* Bairstow-Hitchcock's method */
#include <zm/zm_pex.h>

#define DIM_MAX 10
int main(void)
{
  double a[] = { 7, 6, 5, 4, 3, 2 };
  zPex pex;
  zComplex ans[DIM_MAX], c;
  int dim;
  register int i;

  dim = sizeof(a)/sizeof(double);
  pex = zPexCloneArray( a, dim-1 );
  printf( "Equation:\n" );
  zPexExprX( pex );
  printf( "= 0\n" );
  zPexBH( pex, ans, zTOL, 0 );
  for( i=0; i<dim-1; i++ ){
    printf( "z=" );
    zComplexWrite( &ans[i] );
    /* verification */
    zPexCVal( pex, &ans[i], &c );
    printf( "  P(z)=" );
    zComplexWrite( &c );
    printf( " ... %s\n", zBoolExpr( zComplexIsTiny(&c) ) );
    zEndl();
  }
  return 0;
}

/*
 result will be
 -0.672775 + 1.106710 i
 -0.672775 - 1.106710 i
 0.572918 + 1.129791 i
 0.572918 - 1.129791 i
 -1.300287
 */
