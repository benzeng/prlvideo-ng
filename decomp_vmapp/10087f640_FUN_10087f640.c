
undefined8 FUN_10087f640(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 1, *(int *)(param_1 + 0x1c) != 0)) {
    if (*(int *)(param_1 + 0x18) != 0) {
      _shutdown(*(int *)(param_1 + 0x28),2);
      _close(*(int *)(param_1 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return uVar1;
}

