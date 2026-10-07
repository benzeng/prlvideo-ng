
undefined8 FUN_10087eac0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (uVar1 = 1, *(int *)(param_1 + 0x1c) != 0)) &&
      (*(int *)(param_1 + 0x18) != 0)) && (*(long *)(param_1 + 0x30) != 0)) {
    if ((*(byte *)(param_1 + 0x21) & 2) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x30) + 8) = 0;
    }
    FUN_10087cd20();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return uVar1;
}

