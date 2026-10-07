
undefined8 FUN_1000b7260(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *local_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  QString local_38;
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  FUN_10008f4d0();
  iVar4 = FUN_1000be660(param_1);
  if (iVar4 < 0) {
    FUN_10008f760(param_1,iVar4);
    FUN_10008ec80(param_1,0xc);
    return 0;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x109c8) + 0x1f0);
  if ((uVar1 & 0x2000000) != 0) {
    FUN_100097120(param_1);
    FUN_1000af5a0(param_1,0);
    FUN_10008ec80(param_1,8);
    FUN_10008fa70(*(undefined8 *)(param_1 + 0x109c8),0);
    *(undefined4 *)(param_1 + 0x1948) = 0;
    return 0;
  }
  if ((uVar1 & 0x8000000) == 0) {
    FUN_1002aece0(*(undefined8 *)(param_1 + 0x1a38));
    FUN_1002af430(*(undefined8 *)(param_1 + 0x1a38),*(undefined4 *)(param_1 + 0x1abc));
    uVar2 = DAT_1011c3650;
    if (*(int *)(param_1 + 0x1948) == 2) {
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
      FUN_100063770(uVar2,0x186aa,0,&local_58,0xbbb,&local_60);
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar5 = local_60 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
    }
    FUN_10008fa70(*(undefined8 *)(param_1 + 0x1810),1);
    FUN_1000af5a0(param_1,0);
    FUN_1000bcf90(param_1,0x186a7);
    FUN_10008ec80(param_1,0xe);
    FUN_10008f760(param_1,iVar4);
    *(undefined4 *)(param_1 + 0x1948) = 0;
    return 0;
  }
  FUN_100097120(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x109c8);
  local_38.field0_0x0 =
       *(QTypedArrayData<unsigned_short> **)(*(long *)(*(long *)(param_1 + 0x1940) + 0x60) + 8);
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QFileInfo::QFileInfo(local_30,&local_38);
  FUN_1000d1330(uVar2,local_30);
  QFileInfo::~QFileInfo(local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b74c3;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1000b74c3:
  FUN_1000af5a0(param_1,0);
  FUN_10008ec80(param_1,9);
  FUN_10008fa70(*(undefined8 *)(param_1 + 0x109c8),1);
  *(undefined4 *)(param_1 + 0x1948) = 0;
  return 0;
}

