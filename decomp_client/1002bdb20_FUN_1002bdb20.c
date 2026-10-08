
undefined8 FUN_1002bdb20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000009;
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (uVar1 = 0x80000009, *(long *)(param_1 + 0x30) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

