
undefined8 FUN_1002f50a0(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x100) {
    uVar1 = *(undefined8 *)(param_1 + 0x30 + (ulong)param_2 * 8);
  }
  return uVar1;
}

