
void FUN_10027cc90(long param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long local_48 [3];
  undefined4 local_30;
  
  local_48[1] = 0;
  local_30 = 0;
  local_48[2] = 0;
  local_48[0] = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x150) << 0x20;
  FUN_100274b10(*(long *)(param_1 + 8),0);
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x170);
  iVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,local_48);
  if (iVar2 == 0) {
    if ((param_2 & 1) != 0) {
      FUN_1002790d0(*(undefined8 *)(param_1 + 8),1);
    }
  }
  else {
    iVar3 = FUN_1008e38f0(&DAT_101115cbc);
    if (iVar3 != 0) {
      FUN_1008e3970("","LocalDevices",0,"prlnet_enable_recv() failed with 0x%x",iVar2);
    }
  }
  return;
}

