#include <stdint.h>

#define KEY_1ST 0xa602
#define KEY_2ND 0xb480

struct WD_MC9S08PTXX {
    uint8_t CS1;
    uint8_t CS2;
    uint8_t CNTH;
    uint8_t CNTL;
    uint8_t TOVALH;
    uint8_t TOVALL;
    uint8_t WINH;
    uint8_t WINL;
};

#define CS1_EN     (1 << 7)
#define CS1_INT    (1 << 6)
#define CS1_UPDATE (1 << 5)
#define CS1_TST_M  0x3u
#define CS1_TST(x) (((x) & CS1_TST_M) << 3)
#define CS1_DBG    (1 << 2)
#define CS1_WAIT   (1 << 1)
#define CS1_STOP   (1 << 0)

#define CS2_WIN    (1 << 7)
#define CS2_FLG    (1 << 6)
#define CS2_PRES   (1 << 4)
#define CS2_CLK_M  0x3u
#define CS2_CLK(x) ((x) & CS2_CLK_M)

static unsigned long _divulong_test(void)
{
  volatile unsigned long a = 20000000ul;
  volatile unsigned long b = 1000ul;

  return (a / b);
}

static unsigned int _divuint_test(void)
{
  volatile unsigned int a = 42000u;
  volatile unsigned int b = 122u;

  return (a / b);
}

int main(void)
{
  /* disable WDT */
  struct WD_MC9S08PTXX *WDOG = (struct WD_MC9S08PTXX *)0x3030;

  WDOG->CS1 &= ~CS1_EN;
  WDOG->CS2 = (uint8_t)CS2_CLK(1);
  WDOG->TOVALH = (uint8_t)0;
  WDOG->TOVALL = (uint8_t)4;
  
  (void)_divulong_test();
  (void)_divuint_test();

  for(;;);
  
  return 0;
}
