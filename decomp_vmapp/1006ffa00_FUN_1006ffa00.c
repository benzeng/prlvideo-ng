
void FUN_1006ffa00(long param_1,uint param_2)

{
  ___snprintf_chk(param_1 + 0x169,8,0,0xffffffffffffffff,"%0*lo",7,param_2 >> 0x18);
  ___snprintf_chk(param_1 + 0x171,8,0,0xffffffffffffffff,"%0*lo",7,param_2 & 0xffffff);
  return;
}

