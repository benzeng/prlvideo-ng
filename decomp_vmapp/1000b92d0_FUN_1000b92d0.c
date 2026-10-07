
undefined8 FUN_1000b92d0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long *local_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  long *local_40;
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  iVar3 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
  if (iVar3 == 0x4e4b) {
    uVar5 = FUN_1007d87f0();
    FUN_1008e3970("","vm",0,"[%8llu] VPC frozen by dl:%llu t:%llu",uVar5 / 1000,
                  *(undefined8 *)(*(long *)(param_1 + 0x1a10) + 0x718),
                  *(undefined8 *)(*(long *)(param_1 + 0x1a10) + 0x710));
    FUN_1000a7a00(param_1,0x8000000000);
    cVar2 = FUN_1000a4620(param_1);
    if ((cVar2 != '\0') ||
       (*(long *)(*(long *)(param_1 + 0x1a10) + 0x718) <=
        *(long *)(*(long *)(param_1 + 0x1a10) + 0x710))) {
      plVar6 = (long *)(*(long *)(param_1 + 0x1118) + 0xf0);
      *plVar6 = *plVar6 + 1;
      uVar1 = DAT_1011c3650;
      local_58 = (void *)0x0;
      pvStack_50 = (void *)0x0;
      local_48 = 0;
      plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_60 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_100bef0d0;
        local_60 = plVar6;
      }
      FUN_100063770(uVar1,0x186ed,0,&local_58,0xbbb,&local_60);
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar6 = local_60 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if (local_58 != (void *)0x0) {
        if (pvStack_50 != local_58) {
          pvStack_50 = (void *)((~((long)pvStack_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U)
                               + (long)pvStack_50);
        }
        operator_delete(local_58);
      }
      cVar2 = FUN_1000a4620(param_1);
      if (cVar2 == '\0') goto LAB_1000b9654;
      cVar2 = FUN_1000a4840(param_1);
      if (cVar2 != '\0') goto LAB_1000b9511;
    }
    FUN_1000a7890(param_1);
  }
  else {
    if (iVar3 == 0x4e27) {
      return 0;
    }
    if (iVar3 != 0x4e25) {
      FUN_10008f4d0(param_1);
      return 1;
    }
    uVar7 = 0;
    FUN_1002592b0(FUN_1000be8f0,0);
    uVar5 = FUN_1007d87f0();
    FUN_1008e3970("","vm",0,"[%8llu] VPC unfreeze with next dl:%llu t:%llu",uVar5 / 1000,
                  *(undefined8 *)(*(long *)(param_1 + 0x1a10) + 0x718),
                  *(undefined8 *)(*(long *)(param_1 + 0x1a10) + 0x710));
    cVar2 = FUN_1000a4620(param_1);
    if ((cVar2 == '\0') || (cVar2 = FUN_1000a4840(param_1), cVar2 == '\0')) {
      iVar3 = FUN_1000a7060(param_1);
      if (iVar3 != 0) {
        do {
          FUN_1000afa20(param_1,uVar7);
          uVar7 = uVar7 + 1;
          uVar4 = FUN_1000a7060(param_1);
        } while (uVar7 < uVar4);
      }
      iVar3 = FUN_1000a7060(param_1);
      lVar8 = 0;
      if (iVar3 != 0) {
        do {
          FUN_10008fa70(*(undefined8 *)(param_1 + 0x1810 + lVar8 * 8),3);
          uVar7 = FUN_1000a7060(param_1);
          lVar8 = lVar8 + 1;
        } while ((uint)lVar8 < uVar7);
      }
      FUN_10008f090(param_1);
      uVar1 = DAT_1011c3650;
      local_38 = (void *)0x0;
      pvStack_30 = (void *)0x0;
      local_28 = 0;
      plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_40 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_100bef0d0;
        local_40 = plVar6;
      }
      FUN_100063770(uVar1,0x186ee,0,&local_38,0xbbb,&local_40);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar6 = local_40 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      if (local_38 != (void *)0x0) {
        if (pvStack_30 != local_38) {
          pvStack_30 = (void *)((~((long)pvStack_30 + (-8 - (long)local_38)) & 0xfffffffffffffff8U)
                               + (long)pvStack_30);
        }
        operator_delete(local_38);
      }
      goto LAB_1000b9654;
    }
LAB_1000b9511:
    FUN_10008ec80(param_1,0xc);
  }
LAB_1000b9654:
  FUN_10008f910(param_1,0);
  return 1;
}

