
void FUN_10035b960(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(*(long *)(param_1 + 0x38) + 0x30) = lVar1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

