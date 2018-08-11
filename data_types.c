#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char * argv[])
{
    char letter = 'a';
    int number = 1;
    short small_number = 1;
    float decimal = 1.1;
    double double_decimal = 1.1;
    long long_number = 1;
    long double long_double_decimal = 1.1;
    long long long_long_number = 1;
/*
    CHAR_BIT – size of the char type in bits (at least 8 bits)
    SCHAR_MIN, SHRT_MIN, INT_MIN, LONG_MIN, LLONG_MIN(C99) – minimum possible value of signed integer types: signed char, signed short, signed int, signed long, signed long long
    SCHAR_MAX, SHRT_MAX, INT_MAX, LONG_MAX, LLONG_MAX(C99) – maximum possible value of signed integer types: signed char, signed short, signed int, signed long, signed long long
    UCHAR_MAX, USHRT_MAX, UINT_MAX, ULONG_MAX, ULLONG_MAX(C99) – maximum possible value of unsigned integer types: unsigned char, unsigned short, unsigned int, unsigned long, unsigned long long
    CHAR_MIN – minimum possible value of char
    CHAR_MAX – maximum possible value of char
    MB_LEN_MAX – maximum number of bytes in a multibyte character
*/
    fprintf(stdout,"• Celá čísla •\n\n");
    fprintf(stdout,"Velikost char: %ld\n--- Minimálně: %d\n--- Maximálně: %d\n",sizeof(letter) , SCHAR_MIN, SCHAR_MAX );
    fprintf(stdout,"Velikost short: %ld\n--- Minimálně: %d\n--- Maximálně: %d\n",sizeof(small_number),SHRT_MIN,SHRT_MAX);
    fprintf(stdout,"Velikost int: %ld\n--- Minimálně: %d\n--- Maximálně: %d\n",sizeof(number),INT_MIN,INT_MAX);
    fprintf(stdout,"Velikost long: %ld\n--- Minimálně: %ld\n--- Maximálně: %ld\n",sizeof(long_number),LONG_MIN,LONG_MAX);
    fprintf(stdout,"Velikost long long: %ld\n--- Minimálně: %lld\n--- Maximálně: %lld\n",sizeof(long_long_number),LLONG_MIN,LLONG_MAX);
    
    fprintf(stdout,"\n");
/*
    FLT_MIN, DBL_MIN, LDBL_MIN – minimum normalized positive value of float, double, long double respectively
    FLT_TRUE_MIN, DBL_TRUE_MIN, LDBL_TRUE_MIN (C11) – minimum positive value of float, double, long double respectively
    FLT_MAX, DBL_MAX, LDBL_MAX – maximum finite value of float, double, long double, respectively
    FLT_ROUNDS – rounding mode for floating-point operations
    FLT_EVAL_METHOD (C99) – evaluation method of expressions involving different floating-point types
    FLT_RADIX – radix of the exponent in the floating-point types
    FLT_DIG, DBL_DIG, LDBL_DIG – number of decimal digits that can be represented without losing precision by float, double, long double, respectively
    FLT_EPSILON, DBL_EPSILON, LDBL_EPSILON – difference between 1.0 and the next representable value of float, double, long double, respectively
    FLT_MANT_DIG, DBL_MANT_DIG, LDBL_MANT_DIG – number of FLT_RADIX-base digits in the floating-point significand for types float, double, long double, respectively
    FLT_MIN_EXP, DBL_MIN_EXP, LDBL_MIN_EXP – minimum negative integer such that FLT_RADIX raised to a power one less than that number is a normalized float, double, long double, respectively
    FLT_MIN_10_EXP, DBL_MIN_10_EXP, LDBL_MIN_10_EXP – minimum negative integer such that 10 raised to that power is a normalized float, double, long double, respectively
    FLT_MAX_EXP, DBL_MAX_EXP, LDBL_MAX_EXP – maximum positive integer such that FLT_RADIX raised to a power one less than that number is a normalized float, double, long double, respectively
    FLT_MAX_10_EXP, DBL_MAX_10_EXP, LDBL_MAX_10_EXP – maximum positive integer such that 10 raised to that power is a normalized float, double, long double, respectively
    DECIMAL_DIG (C99) – minimum number of decimal digits such that any number of the widest supported floating-point type can be represented in decimal with a precision of DECIMAL_DIG digits and read back in the original floating-point type without changing its value. DECIMAL_DIG is at least 10.    
*/

    fprintf(stdout,"• Desetinná čísla •\n\n");
    fprintf(stdout,"Velikost float: %ld\n--- Minimálně: %g\n--- Maximálně: %g\n",sizeof(decimal),__FLT_MIN__,__FLT_MAX__);
    fprintf(stdout,"Velikost double: %ld\n--- Minimálně: %g\n--- Maximálně: %g\n",sizeof(double_decimal),__DBL_MIN__,__DBL_MAX__);
    fprintf(stdout,"Velikost long double: %ld\n--- Minimálně: %Lg\n--- Maximálně: %Lg\n",sizeof(long_double_decimal),__LDBL_MIN__,__LDBL_MAX__);
    return 0;
}