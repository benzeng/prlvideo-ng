
void FUN_1003a7b00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x18);
  *(long *)(*(long *)(param_1 + 0x18) + 0x10) = lVar1;
  *(long *)(param_1 + 0x18) = param_1 + 0x10;
  *(long *)(param_1 + 0x20) = param_1 + 0x10;
  return;
}

