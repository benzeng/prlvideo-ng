
undefined8 FUN_10059c050(long *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  undefined4 uStack_4c;
  QString local_38;
  undefined1 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_19;
  
  FUN_1006849d0(*param_1,&local_28);
  param_2[0x10] = 0;
  *param_2 = local_24;
  param_2[1] = local_20;
  param_2[2] = local_28;
  lVar2 = *param_1;
  *(long *)(param_2 + 4) = lVar2;
  uVar3 = param_1[3];
  *(ulong *)(param_2 + 8) = uVar3;
  param_2[7] = (int)uVar3;
  iVar1 = *(int *)((long)param_1 + 0xc);
  if (((iVar1 - 0x50U < 5) || (iVar1 - 0x5aU < 4)) || (iVar1 == 2)) {
    param_2[6] = (int)param_1[1];
  }
  else {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar3;
    param_2[6] = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x100000)) / auVar4,0);
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_30 = 0;
  QString::operator=(&local_38,(QString *)(param_1 + 2));
  plVar5 = operator_new(0x38);
  plVar5[4] = lVar2;
  plVar5[3] = 0;
  plVar5[2] = CONCAT44(uStack_4c,iVar1);
  plVar5[5] = (long)local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_19 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  *(undefined1 *)(plVar5 + 6) = local_30;
  plVar5[1] = (long)(param_2 + 10);
  lVar2 = *(long *)(param_2 + 10);
  *plVar5 = lVar2;
  *(long **)(lVar2 + 8) = plVar5;
  *(long **)(param_2 + 10) = plVar5;
  *(long *)(param_2 + 0xe) = *(long *)(param_2 + 0xe) + 1;
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 0;
}

