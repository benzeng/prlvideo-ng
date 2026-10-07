
undefined8 FUN_1000bb1b0(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *local_80;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  long *local_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  long *local_40;
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  uVar5 = DAT_1011c3650;
  lVar2 = *(long *)(param_1 + 0x48);
  iVar1 = *(int *)(lVar2 + 0x14);
  uVar6 = 0x80020009;
  if (iVar1 < 0x4e21) {
    if (0x1a < iVar1 - 0x3f0U) {
      return 0;
    }
    if ((0x4000019U >> (iVar1 - 0x3f0U & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  else if (iVar1 < 0x4e37) {
    uVar4 = iVar1 - 0x4e21;
    if (0xd < uVar4) {
      return 0;
    }
    if ((0x2b07U >> (uVar4 & 0x1f) & 1) == 0) {
      if ((0xa0U >> (uVar4 & 0x1f) & 1) != 0) {
        FUN_10008f4d0(param_1);
        return 1;
      }
      return 0;
    }
  }
  else if (iVar1 < 0x4e45) {
    if ((iVar1 != 0x4e37) && (iVar1 != 0x4e3b)) {
      return 0;
    }
  }
  else if (iVar1 == 0x4e46) {
    uVar6 = 0;
    if (*(int *)(lVar2 + 0x28) != 0) {
      uVar6 = **(ulong **)(lVar2 + 0x30);
    }
    if (DAT_1011c36a0 == '\0') {
      local_58 = (void *)0x0;
      pvStack_50 = (void *)0x0;
      local_48 = 0;
      plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_60 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        *(undefined4 *)(plVar3 + 1) = 1;
        plVar3[2] = 0;
        *plVar3 = (long)&PTR_FUN_100bef0d0;
        local_60 = plVar3;
      }
      FUN_100063770(uVar5,0x186b4,0,&local_58,0xbbb,&local_60);
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
      uVar5 = 0xe;
    }
    else {
      FUN_10008fa70(param_1,0x4e4a);
      uVar5 = 4;
    }
    FUN_10008ec80(param_1,uVar5);
    FUN_10008f760(param_1,uVar6 & 0xffffffff);
    uVar5 = DAT_1011c3650;
    local_78 = (void *)0x0;
    pvStack_70 = (void *)0x0;
    local_68 = 0;
    plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_80 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      plVar3[2] = 0;
      *plVar3 = (long)&PTR_FUN_100bef0d0;
      local_80 = plVar3;
    }
    FUN_100063770(uVar5,0x186ca,uVar6 & 0xffffffff,&local_78,0xbbb,&local_80);
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (local_78 != (void *)0x0) {
      if (pvStack_70 != local_78) {
        pvStack_70 = (void *)((~((long)pvStack_70 + (-8 - (long)local_78)) & 0xfffffffffffffff8U) +
                             (long)pvStack_70);
      }
      operator_delete(local_78);
    }
  }
  else {
    if (iVar1 != 0x4e45) {
      return 0;
    }
    if (DAT_1011c36a0 == '\0') {
      FUN_1000a78a0(param_1,0);
      uVar5 = DAT_1011c3650;
      local_38 = (void *)0x0;
      pvStack_30 = (void *)0x0;
      local_28 = 0;
      plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_40 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        *(undefined4 *)(plVar3 + 1) = 1;
        plVar3[2] = 0;
        *plVar3 = (long)&PTR_FUN_100bef0d0;
        local_40 = plVar3;
      }
      FUN_100063770(uVar5,0x186c9,0,&local_38,0xbbb,&local_40);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      uVar6 = 0;
      if (local_38 != (void *)0x0) {
        if (pvStack_30 != local_38) {
          pvStack_30 = (void *)((~((long)pvStack_30 + (-8 - (long)local_38)) & 0xfffffffffffffff8U)
                               + (long)pvStack_30);
        }
        operator_delete(local_38);
      }
    }
    else {
      FUN_100097c10(param_1);
      uVar6 = 0;
    }
  }
  FUN_10008f910(param_1,uVar6 & 0xffffffff);
  return 1;
}

