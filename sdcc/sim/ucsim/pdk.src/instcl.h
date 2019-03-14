/* pdk.src/instcl.h */

int get_mem(unsigned int addr);
unsigned char add_to(unsigned char initial, int value, bool carry = false);
unsigned char sub_to(unsigned char initial, int value, bool carry = false);
unsigned char get_io(t_addr addr);
void store_io(t_addr addr, unsigned char value);

enum class flag {
  z,
  c,
  ac,
  ov,
};
bool get_flag(flag n);
void store_flag(flag n, bool value);

int execute(unsigned int code);

/* End of pdk.src/instcl.h */
