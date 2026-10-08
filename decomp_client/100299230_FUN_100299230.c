
undefined8 FUN_100299230(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000009;
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (uVar1 = 0, *(long *)(param_1 + 0x28) == 0)) {
    uVar1 = 0x80000009;
  }
  return uVar1;
}

