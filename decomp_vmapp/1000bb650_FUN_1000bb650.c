
undefined8 FUN_1000bb650(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
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
  
  uVar3 = DAT_1011c3650;
  lVar2 = *(long *)(param_1 + 0x48);
  iVar1 = *(int *)(lVar2 + 0x14);
  uVar6 = 0x80020009;
  if (iVar1 < 0x4e21) {
    uVar4 = iVar1 - 0x3ee;
    if (0x1c < uVar4) {
      return 0;
    }
    if ((0x10000064U >> (uVar4 & 0x1f) & 1) == 0) {
      if (uVar4 != 0) {
        return 0;
      }
LAB_1000bb8df:
      local_78 = (void *)0x0;
      pvStack_70 = (void *)0x0;
      local_68 = 0;
      plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_80 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        plVar5[2] = 0;
        *plVar5 = (long)&PTR_FUN_100bef0d0;
        local_80 = plVar5;
      }
      FUN_100063770(uVar3,0x186ca,0x80020018,&local_78,0xbbb,&local_80);
      if (local_80 != (long *)0x0) {
        LOCK();
        plVar5 = local_80 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      if (local_78 != (void *)0x0) {
        if (pvStack_70 != local_78) {
          pvStack_70 = (void *)((~((long)pvStack_70 + (-8 - (long)local_78)) & 0xfffffffffffffff8U)
                               + (long)pvStack_70);
        }
        operator_delete(local_78);
      }
      if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 8) != 0) {
        FUN_1000d1220();
        return 0;
      }
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
      if (uVar4 != 6) {
        return 0;
      }
      goto LAB_1000bb8df;
    }
  }
  else if ((iVar1 != 0x4e37) && (iVar1 != 0x4e3b)) {
    if (iVar1 != 0x4e46) {
      return 0;
    }
    uVar6 = 0;
    if (*(int *)(lVar2 + 0x28) != 0) {
      uVar6 = **(ulong **)(lVar2 + 0x30);
    }
    if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 8) == 0) {
      local_38 = (void *)0x0;
      pvStack_30 = (void *)0x0;
      local_28 = 0;
      plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_40 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        plVar5[2] = 0;
        *plVar5 = (long)&PTR_FUN_100bef0d0;
        local_40 = plVar5;
      }
      FUN_100063770(uVar3,0x186b4,0,&local_38,0xbbb,&local_40);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
    }
    else {
      FUN_1000bcf90(param_1,0x186a7);
    }
    FUN_10008ec80(param_1,0xe);
    FUN_10008f760(param_1,uVar6 & 0xffffffff);
    uVar3 = DAT_1011c3650;
    local_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = 0;
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_100bef0d0;
      local_60 = plVar5;
    }
    FUN_100063770(uVar3,0x186ca,uVar6 & 0xffffffff,&local_58,0xbbb,&local_60);
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    if (local_58 != (void *)0x0) {
      if (pvStack_50 != local_58) {
        pvStack_50 = (void *)((~((long)pvStack_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U) +
                             (long)pvStack_50);
      }
      operator_delete(local_58);
    }
  }
  FUN_10008f910(param_1,uVar6 & 0xffffffff);
  return 1;
}

