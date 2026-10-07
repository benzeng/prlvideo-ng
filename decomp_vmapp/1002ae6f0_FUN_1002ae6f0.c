
bool FUN_1002ae6f0(long param_1)

{
  uint in_EAX;
  int iVar1;
  bool bVar2;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  iVar1 = _CGMainDisplayID();
  uStack_18 = (ulong)(uint)uStack_18;
  if (*(int *)(param_1 + 0x858) == iVar1) {
    bVar2 = false;
  }
  else {
    *(int *)(param_1 + 0x858) = iVar1;
    _CGLGetVirtualScreen(*(undefined8 *)(param_1 + 0x868),(long)&uStack_18 + 4);
    iVar1 = FUN_1002ad820(param_1);
    bVar2 = iVar1 != uStack_18._4_4_;
  }
  return bVar2;
}

