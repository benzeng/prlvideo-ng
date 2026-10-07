
void FUN_10035cd10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  *(long *)(*(long *)(param_1 + 8) + 0x10) = lVar1;
  *(long *)(param_1 + 8) = param_1;
  *(long *)(param_1 + 0x10) = param_1;
  FUN_100365cd0(param_1,0);
  return;
}

