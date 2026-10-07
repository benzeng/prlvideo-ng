
undefined8 FUN_1000baa50(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_70 [24];
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  long *local_40;
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_1 + 0x48);
  iVar3 = *(int *)(lVar1 + 0x14);
  if (iVar3 < 0x4e46) {
    if (iVar3 == 0x4e3d) {
      if ((*(int *)(lVar1 + 0x28) != 0) && (iVar3 = 0, **(long **)(lVar1 + 0x30) != 0))
      goto LAB_1000bac45;
      uVar5 = *(undefined8 *)(param_1 + 0x1810);
      uVar4 = 2;
      goto LAB_1000bac02;
    }
    if (iVar3 != 0x4e45) {
      return 0;
    }
    iVar3 = 0;
    if (DAT_1011c36a0 != '\0') goto LAB_1000bac45;
    FUN_10008f760(param_1,0);
    FUN_1000a78a0(param_1,0);
    FUN_1000a7ae0(param_1,0,1);
    uVar5 = DAT_1011c3650;
    local_38 = (void *)0x0;
    pvStack_30 = (void *)0x0;
    local_28 = 0;
    plVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 1;
      plVar2[2] = 0;
      *plVar2 = (long)&PTR_FUN_100bef0d0;
      local_40 = plVar2;
    }
    FUN_100063770(uVar5,0x186c9,0,&local_38,0xbbb,&local_40);
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    if (local_38 != (void *)0x0) {
      if (pvStack_30 != local_38) {
        pvStack_30 = (void *)((~((long)pvStack_30 + (-8 - (long)local_38)) & 0xfffffffffffffff8U) +
                             (long)pvStack_30);
      }
      operator_delete(local_38);
    }
    FUN_10008ec80(param_1,0x10);
  }
  else {
    if (iVar3 == 0x4e46) {
      iVar3 = 0;
      if ((*(int *)(lVar1 + 0x28) == 0) || (iVar3 = **(int **)(lVar1 + 0x30), -1 < iVar3)) {
        if (DAT_1011c36a0 == '\0') {
          FUN_1000a78a0(param_1,0);
          FUN_1000a7ae0(param_1,0,0);
          FUN_1000bcf90(param_1,0x186a7);
          uVar5 = 0xe;
        }
        else {
          FUN_1000bcf90(param_1,0x186b3);
          uVar5 = 4;
        }
        FUN_10008ec80(param_1,uVar5);
      }
      else {
        FUN_10008f760(param_1,0);
        FUN_10008ec80(param_1,0xc);
        uVar5 = DAT_1011c3650;
        local_58 = (void *)0x0;
        pvStack_50 = (void *)0x0;
        local_48 = 0;
        FUN_10006a060(local_70);
        FUN_1000648b0(uVar5,iVar3,&local_58,local_70);
        FUN_10006a680(local_70);
        if (local_58 != (void *)0x0) {
          if (pvStack_50 != local_58) {
            pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU
                                  ) + (long)pvStack_50);
          }
          operator_delete(local_58);
        }
      }
      FUN_10008f760(param_1,iVar3);
      goto LAB_1000bac45;
    }
    if (iVar3 != 0x4e4a) {
      return 0;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x109c8);
    uVar4 = 0x102;
LAB_1000bac02:
    FUN_10008fa70(uVar5,uVar4);
  }
  iVar3 = 0;
LAB_1000bac45:
  FUN_10008f910(param_1,iVar3);
  return 1;
}

