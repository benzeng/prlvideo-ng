
char * FUN_1003b72c0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 >> 0xb & 3) - 1;
  if (uVar1 < 3) {
    return (&PTR_s_domain_isoline_100bbe2d0)[(int)uVar1];
  }
  return "domain?";
}

