
void FUN_10027a3b0(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x170) + 0x70))();
  if (iVar1 != 0) {
    FUN_1008e3970("","LocalDevices",0,"prlnet_disable_recv() failed with 0x%x");
    return;
  }
  return;
}

