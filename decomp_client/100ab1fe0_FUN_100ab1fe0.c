
void FUN_100ab1fe0(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_2[5];
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x20) = param_2[4];
  }
  *(long *)param_2[4] = lVar1;
  (**(code **)(*param_2 + 8))(param_2);
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
    return;
  }
  FUN_100aaf5d0(param_1 + 0x28);
  return;
}

