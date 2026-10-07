
ulong FUN_10040dbc0(float param_1)

{
  ulong uVar1;
  float *pfVar2;
  
  pfVar2 = (float *)&DAT_100b40a90;
  uVar1 = 0;
  do {
    if (*pfVar2 <= param_1) {
      return uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (uVar1 < 0x1f);
  return 0x1f;
}

