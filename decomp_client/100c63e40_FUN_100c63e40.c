
undefined8 FUN_100c63e40(ulong param_1)

{
  long lVar1;
  ulong local_20 [2];
  
  if (DAT_1023167f0 == (undefined **)0x0) {
    FUN_100bf2780(9,1,"err.c",0x127);
    if (DAT_1023167f0 == (undefined **)0x0) {
      DAT_1023167f0 = &PTR_FUN_10224e4e8;
    }
    FUN_100bf2780(10,1,"err.c",0x12a);
  }
  local_20[0] = (ulong)((uint)param_1 & 0xff000fff);
  lVar1 = (*(code *)DAT_1023167f0[2])(local_20);
  if (lVar1 == 0) {
    local_20[0] = param_1 & 0xfff;
    lVar1 = (*(code *)DAT_1023167f0[2])(local_20);
    if (lVar1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(lVar1 + 8);
}

