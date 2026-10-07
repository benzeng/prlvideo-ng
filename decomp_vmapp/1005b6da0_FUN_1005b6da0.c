
void FUN_1005b6da0(long param_1,long param_2)

{
  long lVar1;
  
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  for (lVar1 = *(long *)(param_2 + 8); lVar1 != param_2; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_1005b6e60(param_1,lVar1 + 0x10);
  }
  return;
}

