
void FUN_100736680(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if ((*(int *)(lVar1 + 0x2c) == param_2) && (*(int *)(lVar1 + 0x30) == param_3)) {
    return;
  }
  *(ulong *)(lVar1 + 0x2c) = CONCAT44(param_3,param_2);
  FUN_100735fe0(*(undefined8 *)(param_1 + 0x30));
  return;
}

