
undefined8
FUN_1005a4000(long param_1,undefined4 param_2,long param_3,long param_4,QString *param_5,
             undefined1 param_6)

{
  long lVar1;
  long *plVar2;
  undefined4 uStack_4c;
  QString local_38;
  undefined1 local_30;
  undefined1 local_21;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_30 = 0;
  QString::operator=(&local_38,param_5);
  local_30 = param_6;
  plVar2 = operator_new(0x38);
  plVar2[4] = param_4;
  plVar2[3] = param_3;
  plVar2[2] = CONCAT44(uStack_4c,param_2);
  plVar2[5] = (long)local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
    param_6 = local_30;
  }
  *(undefined1 *)(plVar2 + 6) = param_6;
  plVar2[1] = param_1 + 0x28;
  lVar1 = *(long *)(param_1 + 0x28);
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  *(long **)(param_1 + 0x28) = plVar2;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 0;
}

