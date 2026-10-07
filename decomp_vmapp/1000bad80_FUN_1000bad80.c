
undefined8 FUN_1000bad80(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long *local_70;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  long *local_50;
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x48);
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 0x4e4f) {
    QMutex::lock();
    if (*(int *)(param_1 + 0x109b0) == 3) {
      FUN_1008e3970("","vm",0,"Initial WS protection request failed");
      *(undefined4 *)(param_1 + 0x109b0) = 2;
      QWaitCondition::wakeOne();
    }
    else if (*(int *)(param_1 + 0x109b0) == 4) {
      uVar5 = 1;
      if ((*(int *)(*(long *)(param_1 + 0x48) + 0x28) != 0) &&
         (uVar5 = 1, **(long **)(*(long *)(param_1 + 0x48) + 0x30) != 0)) {
        uVar5 = 2;
      }
      *(undefined4 *)(param_1 + 0x109b0) = uVar5;
      QWaitCondition::wakeOne();
    }
    else {
      uVar5 = 0;
      if (*(int *)(*(long *)(param_1 + 0x48) + 0x28) != 0) {
        uVar5 = **(undefined4 **)(*(long *)(param_1 + 0x48) + 0x30);
      }
      FUN_1008e3970("","vm",0,"Ignoring unexpected WS protection notification (%u, %u)",
                    *(undefined4 *)(param_1 + 0x109b0),uVar5);
    }
    QMutex::unlock();
  }
  else {
    if (iVar1 == 0x4e46) {
      uVar5 = 0;
      if (*(int *)(lVar2 + 0x28) != 0) {
        uVar5 = **(undefined4 **)(lVar2 + 0x30);
      }
      if (DAT_1011c36a0 == '\0') {
        FUN_1000a78a0(param_1,0);
        uVar4 = DAT_1011c3650;
        local_68 = (void *)0x0;
        pvStack_60 = (void *)0x0;
        local_58 = 0;
        plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_70 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          *(undefined4 *)(plVar3 + 1) = 1;
          plVar3[2] = 0;
          *plVar3 = (long)&PTR_FUN_100bef0d0;
          local_70 = plVar3;
        }
        FUN_100063770(uVar4,0x186b4,0,&local_68,0xbbb,&local_70);
        if (local_70 != (long *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          lVar2 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*local_70 + 0x10))();
          }
        }
        if (local_68 != (void *)0x0) {
          if (pvStack_60 != local_68) {
            pvStack_60 = (void *)((~((long)pvStack_60 + (-8 - (long)local_68)) & 0xfffffffffffffff8U
                                  ) + (long)pvStack_60);
          }
          operator_delete(local_68);
        }
        uVar4 = 0xe;
      }
      else {
        FUN_10008fa70(param_1,0x4e4a);
        uVar4 = 4;
      }
      FUN_10008ec80(param_1,uVar4);
      FUN_10008f760(param_1,uVar5);
      goto LAB_1000bb0bd;
    }
    if (iVar1 != 0x4e45) {
      return 0;
    }
    uVar5 = 0;
    if (DAT_1011c36a0 != '\0') goto LAB_1000bb0bd;
    FUN_10008f760(param_1,0);
    FUN_1000a78a0(param_1,0);
    FUN_1000a7ae0(param_1,0,0);
    uVar4 = DAT_1011c3650;
    local_48 = (void *)0x0;
    pvStack_40 = (void *)0x0;
    local_38 = 0;
    plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      plVar3[2] = 0;
      *plVar3 = (long)&PTR_FUN_100bef0d0;
      local_50 = plVar3;
    }
    FUN_100063770(uVar4,0x186c9,0,&local_48,0xbbb,&local_50);
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    if (local_48 != (void *)0x0) {
      if (pvStack_40 != local_48) {
        pvStack_40 = (void *)((~((long)pvStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U) +
                             (long)pvStack_40);
      }
      operator_delete(local_48);
    }
    FUN_10008ec80(param_1,0x10);
  }
  uVar5 = 0;
LAB_1000bb0bd:
  FUN_10008f910(param_1,uVar5);
  return 1;
}

