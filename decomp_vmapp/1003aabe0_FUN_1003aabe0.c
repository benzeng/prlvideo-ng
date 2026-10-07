
void FUN_1003aabe0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x30) == param_1) {
      *(undefined8 *)(lVar1 + 0x30) = **(undefined8 **)(param_1 + 8);
    }
    if (*(long *)(lVar1 + 0x28) == param_1) {
      *(undefined8 *)(lVar1 + 0x28) = **(undefined8 **)(param_1 + 0x10);
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  *(long *)(*(long *)(param_1 + 8) + 0x10) = lVar1;
  *(long *)(param_1 + 8) = param_1;
  *(long *)(param_1 + 0x10) = param_1;
  return;
}

