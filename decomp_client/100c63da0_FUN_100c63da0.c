
undefined8 FUN_100c63da0(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong local_20 [2];
  
  if (DAT_1023167f0 == (undefined **)0x0) {
    FUN_100bf2780(9,1,"err.c",0x127);
    if (DAT_1023167f0 == (undefined **)0x0) {
      DAT_1023167f0 = &PTR_FUN_10224e4e8;
    }
    FUN_100bf2780(10,1,"err.c",0x12a);
  }
  local_20[0] = (ulong)(param_1 & 0xfffff000);
  lVar1 = (*(code *)DAT_1023167f0[2])(local_20);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}

