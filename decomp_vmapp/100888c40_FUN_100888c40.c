
undefined8 FUN_100888c40(ulong param_1)

{
  long lVar1;
  ulong local_20 [2];
  
  if (DAT_1011c0db0 == (undefined **)0x0) {
    FUN_10081d010(9,1,"err.c",0x127);
    if (DAT_1011c0db0 == (undefined **)0x0) {
      DAT_1011c0db0 = &PTR_FUN_100bde1a8;
    }
    FUN_10081d010(10,1,"err.c",0x12a);
  }
  local_20[0] = (ulong)((uint)param_1 & 0xff000fff);
  lVar1 = (*(code *)DAT_1011c0db0[2])(local_20);
  if (lVar1 == 0) {
    local_20[0] = param_1 & 0xfff;
    lVar1 = (*(code *)DAT_1011c0db0[2])(local_20);
    if (lVar1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(lVar1 + 8);
}

