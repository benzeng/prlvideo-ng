
void FUN_10027afa0(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  byte bVar7;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int local_30;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar5 + 0x26) != '\0') {
    if (*(char *)(lVar5 + 0x22) == '\0') {
      bVar7 = 0;
    }
    else {
      FUN_1008e3970("","LocalDevices",0,"CNetE1000::enable_rx() is not implemented");
      lVar5 = *(long *)(param_1 + 0x18);
      bVar7 = *(byte *)(lVar5 + 0x22);
    }
    local_40 = 3;
    local_3c = *(undefined4 *)(*(long *)(param_1 + 8) + 0x150);
    local_38 = (uint)bVar7;
    cVar2 = *(char *)(lVar5 + 0x27);
    if ((bVar7 == 0) && (cVar2 != '\0')) {
      FUN_1008e3970("","LocalDevices",0,
                    "CNetE1000: Ignoring LPE-bit (jumbo-frames) because direct-rx==0");
      cVar2 = *(char *)(*(long *)(param_1 + 0x18) + 0x27);
    }
    piVar6 = &DAT_1011c380c;
    if (cVar2 == '\0') {
      piVar6 = (int *)PTR_DAT_100ba2110;
    }
    local_34 = *piVar6;
    local_30 = local_34 + 0x12;
    *(int *)(param_1 + 0x51f8) = local_30;
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x170);
    iVar3 = (**(code **)(*plVar1 + 0x68))(plVar1,&local_40);
    if (iVar3 == 0) {
      if ((param_2 & 1) != 0) {
        FUN_1002790d0(*(undefined8 *)(param_1 + 8),1);
      }
    }
    else {
      iVar4 = FUN_1008e38f0(&DAT_101115c84);
      if (iVar4 != 0) {
        FUN_1008e3970("","LocalDevices",0,"prlnet_enable_recv() failed with 0x%x",iVar3);
      }
    }
    return;
  }
  FUN_1008e3970("","LocalDevices",0,
                "CNetE1000::enable_rx(): snapshot is not valid. Card will not work");
  return;
}

