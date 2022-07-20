#line 142 "bits.c"
int isAsciiDigit(int x)
{
 int lowCmp=  x + ~0x30 + 1;
 int highCmp=  x + ~0x3a + 1;
 lowCmp >>= 31;
 highCmp >>= 31;
 return ((!lowCmp) & !!(highCmp));
}
#line 157
int anyEvenBit(int x)
{

 int a=  0x55;
 int b=(  a << 8) + a;
 int c=(  b << 8) + a;
 int d=(  c << 8) + a;
 return !!(x & d);
}
#line 173
int copyLSB(int x)
{

 return x << 31 >> 31;
}
#line 186
int leastBitPos(int x)
{
 int _x=  ~x + 1;
 return x & _x;
}
#line 199
int divpwr2(int x, int n)
{
 int sig=  !!(x >> 31);
 int msk=(  1 << n) + ~0;
 int xLowN=  msk & x;

 return (x >> n) +(( !!xLowN) & sig);
}
#line 215
int bitCount(int x)
{
 int msk;int sum;


 msk = 0x11 |( 0x11 << 8);
 msk = msk |( msk << 16);


 sum = x & msk;
 sum +=( x >> 1) & msk;
 sum +=( x >> 2) & msk;
 sum +=( x >> 3) & msk;


 msk = 0xff |( 0xff << 8);
 sum =( sum >> 16) +( sum & msk);

 msk = 0xf |( 0xf << 8);
 sum =(( sum >> 4) & msk) +( sum & msk);

 msk = 0xff;
 sum =( sum & msk) +( sum >> 8);

 return sum;
}
