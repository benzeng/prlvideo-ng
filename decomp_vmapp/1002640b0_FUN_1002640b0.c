
void FUN_1002640b0(long param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_100264110();
  LOCK();
  piVar1 = (int *)(*(long *)(param_1 + 0x90) + 0x102c);
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if ((iVar2 != 0) && (*(int *)(*(long *)(param_1 + 0xb0) + 0x14) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))(*(long **)(param_1 + 0x98),param_1 + 0xa8);
    FUN_100269b40(param_1 + 0xa8);
    return;
  }
  return;
}

