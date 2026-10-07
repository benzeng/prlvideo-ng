
void FUN_1002886c0(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong local_28;
  undefined8 local_20;
  
  if (*(long *)(param_1 + 0x3a0f0) == param_1 + 0x3a0f0) {
    local_20 = 0;
    iVar5 = FUN_1007d75f0(*(long *)(param_1 + 0xa0) + 0x1028,&local_20,4);
    local_28 = 0xffffffffffffffff;
    if (iVar5 == 4) {
      local_28 = local_20;
    }
    if (local_28 != 0xffffffffffffffff) {
      iVar5 = FUN_1007d74c0(DAT_1011c3ca0,&local_28,4);
      if (iVar5 != 4) {
        FUN_1008e3970("","LocalDevices",0,"LSI: beware put to reply free fifo");
        goto LAB_1002887c6;
      }
      lVar4 = *(long *)(param_1 + 0x98);
      if (*(long *)(lVar4 + 0x11b0) != 0) {
        bVar2 = *(byte *)(param_1 + 0x90);
        uVar6 = *(ulong *)(lVar4 + 0x11b8);
        do {
          LOCK();
          uVar7 = *(ulong *)(lVar4 + 0x11b8);
          bVar8 = uVar6 == uVar7;
          if (bVar8) {
            *(ulong *)(lVar4 + 0x11b8) = 1L << (bVar2 & 0x3f) | uVar6;
            uVar7 = uVar6;
          }
          UNLOCK();
          uVar6 = uVar7;
        } while (!bVar8);
      }
    }
  }
  else {
    FUN_100287660(param_1);
  }
  uVar3 = *(undefined4 *)(*(long *)(param_2 + 0x88) + 8);
  plVar1 = (long *)(*(long *)(param_1 + 0x3a128) + 0xf0);
  *plVar1 = *plVar1 + 1;
  local_20 = CONCAT44(local_20._4_4_,uVar3) & 0xffffffff1fffffff;
  iVar5 = FUN_1007d74c0(DAT_1011c3ca0 + 0x1020,&local_20,4);
  if (iVar5 != 4) {
    FUN_1008e3970("","LocalDevices",0,"LSI: beware reply fifo: 0x%08X",local_20 & 0xffffffff);
  }
LAB_1002887c6:
  FUN_100287ba0(param_1,param_2);
  return;
}

