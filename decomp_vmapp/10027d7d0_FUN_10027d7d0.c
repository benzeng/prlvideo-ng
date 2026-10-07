
void FUN_10027d7d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  long lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",3,"[CNetVirtIo::enable_rx] param:%llx",param_2);
  }
  FUN_100274b10(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x90b8));
  *(uint *)(param_1 + 0xc8f0) = *(uint *)(*(long *)(param_1 + 0x10) + 0x30) & 0x8000;
  _local_38 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 8) + 0x150),2);
  uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x30) & 0x80;
  uVar5 = 0x3fed;
  if (uVar4 == 0) {
    uVar5 = 0x5dc;
  }
  local_28 = 0x3fff;
  if (uVar4 == 0) {
    local_28 = 0x5ee;
  }
  lStack_30 = (ulong)uVar5 << 0x20;
  uStack_24 = (undefined4)*(undefined8 *)(param_1 + 0x4880);
  local_20 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x4880) >> 0x20);
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x170);
  iVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,&local_38);
  if (iVar2 != 0) {
    iVar3 = FUN_1008e38f0(&DAT_101115d14);
    if (iVar3 != 0) {
      FUN_1008e3970("","LocalDevices",0,"prlnet_enable_recv() failed with 0x%x",iVar2);
    }
  }
  return;
}

