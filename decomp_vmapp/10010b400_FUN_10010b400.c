
bool FUN_10010b400(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x80) {
    uVar1 = *(uint *)(PTR___DefaultRuneLocale_100ba20c0 + (long)(int)param_1 * 4 + 0x3c) & 0x500;
  }
  else {
    uVar1 = ___maskrune(param_1,0x500);
  }
  return uVar1 != 0;
}

