
undefined8 FUN_10029b700(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000018;
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (uVar1 = 0x80000018, *(long *)(param_1 + 0x20) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

