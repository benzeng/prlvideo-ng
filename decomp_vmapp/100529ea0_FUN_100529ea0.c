
void FUN_100529ea0(long param_1,undefined2 param_2,undefined2 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined2 *)(lVar1 + 8) = param_2;
  *(undefined2 *)(lVar1 + 10) = param_3;
  return;
}

