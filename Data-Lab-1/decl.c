#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TMin INT_MIN
#define TMax INT_MAX

#include "btest.h"
#include "bits.h"

test_rec test_set[] = {

 {"isAsciiDigit", (funct_t) isAsciiDigit, (funct_t) test_isAsciiDigit, 1, "! ~ & ^ | + << >>", 15, 3,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"anyEvenBit", (funct_t) anyEvenBit, (funct_t) test_anyEvenBit, 1, "! ~ & ^ | + << >>", 12, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"copyLSB", (funct_t) copyLSB, (funct_t) test_copyLSB, 1, "! ~ & ^ | + << >>", 5, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"leastBitPos", (funct_t) leastBitPos, (funct_t) test_leastBitPos, 1, "! ~ & ^ | + << >>", 6, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"divpwr2", (funct_t) divpwr2, (funct_t) test_divpwr2, 2,"! ~ & ^ | + << >>", 15, 2,
  {{TMin, TMax},{0,30},{TMin,TMax}}},
 {"bitCount", (funct_t) bitCount, (funct_t) test_bitCount, 1, "! ~ & ^ | + << >>", 40, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
  {"", NULL, NULL, 0, "", 0, 0, {{0, 0},{0,0},{0,0}}}
};
