
void FUN_1006ffb90(long param_1,uint param_2)

{
  if ((param_2 & 0xf000) == 0xc000) {
    param_2 = param_2 & 0x2fff;
  }
  ___snprintf_chk(param_1 + 0x84,8,0,0xffffffffffffffff,"%0*lo",7,param_2 & 0xfff);
  return;
}

