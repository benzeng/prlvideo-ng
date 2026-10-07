
void FUN_1005f6830(long *param_1)

{
  int iVar1;
  
  (**(code **)(*(long *)param_1[0xb] + 0x310))();
  iVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x100))(param_1);
    if (-1 < iVar1) {
      FUN_1005fae80(param_1);
      return;
    }
  }
  return;
}

