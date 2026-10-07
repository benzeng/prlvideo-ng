
void FUN_10037bf60(long param_1)

{
  long lVar1;
  
  FUN_10037bfe0(param_1,0,0);
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  *(long *)(*(long *)(param_1 + 8) + 0x10) = lVar1;
  *(long *)(param_1 + 8) = param_1;
  *(long *)(param_1 + 0x10) = param_1;
  (*DAT_1011c5b78)(*(undefined4 *)(param_1 + 0x50));
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x60));
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x40));
    return;
  }
  return;
}

