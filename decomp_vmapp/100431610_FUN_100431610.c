
undefined8 FUN_100431610(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x28)) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 8)) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0xc)) {
    uVar1 = 0;
  }
  else if ((*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) ||
          (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x1c))) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
    uVar1 = CONCAT71((int7)((ulong)uVar1 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

