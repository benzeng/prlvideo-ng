
undefined4 FUN_100301220(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x10) {
    uVar1 = *(undefined4 *)(param_1 + 0x180 + (ulong)param_2 * 0x2c);
  }
  return uVar1;
}

