
void FUN_100274b10(long param_1,long param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = *(long *)(param_1 + 0x178);
  }
  *(long *)(param_1 + 0x180) = param_2;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x170) + 0x50))();
  if (iVar1 != 0) {
    FUN_1008e3970("","LocalDevices",0,"net_adapter %d:Failed to set rx-monev: error %x",
                  *(undefined4 *)(param_1 + 0x150));
    return;
  }
  return;
}

