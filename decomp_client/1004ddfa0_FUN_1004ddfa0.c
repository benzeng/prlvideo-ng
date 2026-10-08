
QString * FUN_1004ddfa0(QString *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar1 = FUN_1003b0a30(param_2[8]);
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    return param_1;
  }
  uVar2 = FUN_1003b0a30(param_2[8]);
  FUN_100188480(&local_48,uVar2);
  QString::fromUtf8_helper((char *)&local_40,0x1df14c0);
  QString::append(&local_40);
  local_38.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_21 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
  QString::append(&local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004de067;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004de067:
  (**(code **)(*param_2 + 0x1b0))(&local_50,param_2);
  param_1->field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004de0ce;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004de0ce:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004de0fe;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1004de0fe:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004de12e;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004de12e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return param_1;
}

