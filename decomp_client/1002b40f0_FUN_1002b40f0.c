
undefined8 FUN_1002b40f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000009;
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (uVar1 = 0x80000009, *(long *)(param_1 + 0x40) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

