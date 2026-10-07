
undefined8 FUN_1002eefb0(uint param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  puVar1 = (uint *)FUN_1000e99d0(*(undefined8 *)(DAT_1011c3698 + 0x1158),0x25b,0);
  if (param_1 < *puVar1) {
    uVar2 = *(undefined8 *)(puVar1 + (ulong)param_1 * 6 + 2);
  }
  return uVar2;
}

