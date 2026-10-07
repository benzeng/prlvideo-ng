
undefined8 FUN_100087970(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined1 local_c0 [24];
  void *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  undefined1 local_90 [24];
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  undefined1 local_60 [24];
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  plVar3 = (long *)FUN_1000a3990(DAT_1011c3698);
  uVar1 = DAT_1011c3650;
  if (plVar3 == (long *)0x0) {
    local_48 = (void *)0x0;
    pvStack_40 = (void *)0x0;
    local_38 = 0;
    FUN_10006a060(local_60);
    FUN_1000648b0(uVar1,0x80000352,&local_48,local_60);
    FUN_10006a680(local_60);
    if (local_48 == (void *)0x0) {
      return 0x80000352;
    }
    if (pvStack_40 != local_48) {
      pvStack_40 = (void *)((~((long)pvStack_40 + (-4 - (long)local_48)) & 0xfffffffffffffffcU) +
                           (long)pvStack_40);
    }
    operator_delete(local_48);
    return 0x80000352;
  }
  uVar4 = (**(code **)(*plVar3 + 0x138))(plVar3);
  (**(code **)(*plVar3 + 8))(plVar3);
  param_1 = param_1 + 0xa58;
  lVar5 = FUN_1007da540(param_1,"kernel.hvt_support",uVar4 & 1);
  if (lVar5 == 0) {
LAB_100087b5f:
    FUN_1008e3970("","vm",0,"HVT not present, post warning");
    uVar1 = DAT_1011c3650;
    local_a8 = (void *)0x0;
    pvStack_a0 = (void *)0x0;
    local_98 = 0;
    FUN_10006a060(local_c0);
    FUN_1000648b0(uVar1,0x80036028,&local_a8);
    FUN_10006a680(local_c0);
    uVar4 = 0;
    if (local_a8 == (void *)0x0) goto LAB_100087c08;
    pvVar8 = local_a8;
    if (pvStack_a0 != local_a8) {
      pvStack_a0 = (void *)((~((long)pvStack_a0 + (-4 - (long)local_a8)) & 0xfffffffffffffffcU) +
                           (long)pvStack_a0);
    }
  }
  else {
    lVar5 = FUN_1007da540(param_1,"kernel.npt.enable",uVar4 & 4);
    uVar7 = uVar4 & 0xfffffffffffffffb;
    if (lVar5 != 0) {
      uVar7 = uVar4;
    }
    uVar6 = 0;
    if (lVar5 != 0) {
      uVar6 = (uint)uVar4;
    }
    iVar2 = FUN_1007da320(param_1,"kernel.use_unrestricted",uVar6 & 4);
    uVar4 = uVar7 & 0xfffffffffffff7ff;
    if (iVar2 != 0) {
      uVar4 = uVar7;
    }
    if ((uVar4 & 3) == 0) goto LAB_100087b5f;
    if (1 < (uVar4 & 3) - 2) goto LAB_100087c08;
    FUN_1008e3970("","vm",0,"HVT is disabled, set HVT status to \"not present\"");
    uVar1 = DAT_1011c3650;
    local_78 = (void *)0x0;
    pvStack_70 = (void *)0x0;
    local_68 = 0;
    FUN_10006a060(local_90);
    FUN_1000648b0(uVar1,0x80000507,&local_78);
    FUN_10006a680(local_90);
    uVar4 = 0;
    if (local_78 == (void *)0x0) goto LAB_100087c08;
    pvVar8 = local_78;
    if (pvStack_70 != local_78) {
      pvStack_70 = (void *)((~((long)pvStack_70 + (-4 - (long)local_78)) & 0xfffffffffffffffcU) +
                           (long)pvStack_70);
    }
  }
  operator_delete(pvVar8);
  uVar4 = 0;
LAB_100087c08:
  *param_2 = uVar4;
  return 0;
}

