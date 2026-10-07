
void FUN_10027cd70(long param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (3 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",4,"CNetRTL::ProcessNetRequest: %d",uVar1);
  }
  if ((uVar1 | 8) == 10) {
    FUN_100276490(*(long *)(param_1 + 8),*(undefined4 *)(*(long *)(param_1 + 8) + 0x200));
    return;
  }
  FUN_1008e3970("","LocalDevices",0,"CNetRTL::ProcessNetRequest: unknown req %d",uVar1);
  return;
}

