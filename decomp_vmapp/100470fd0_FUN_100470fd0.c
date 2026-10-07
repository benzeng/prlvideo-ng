
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100470fd0(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 local_58 [2];
  undefined4 local_50;
  QTime local_48 [8];
  QString local_40;
  QArrayData *local_38;
  int *local_30;
  QString local_28;
  undefined1 local_19;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("parallels.TIS.host.cross",0x18);
  FUN_100473c40(&local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100471030;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100471030:
  if (*local_30 != 1) {
    FUN_100031c40(&local_30);
  }
  local_30[6] = 0xc;
  local_30[7] = 2;
  local_30[8] = 0xa28f;
  local_30[9] = -0x7fffffff;
  if (local_30 == (int *)0x0) {
    _DAT_00000028 = 1;
    _DAT_0000002c = 3;
    piVar2 = (int *)0x0;
  }
  else {
    if (*local_30 == 1) {
      local_30[10] = 1;
      local_30[0xb] = 3;
    }
    else {
      FUN_100031c40(&local_30);
      local_30[10] = 1;
      local_30[0xb] = 3;
      piVar2 = (int *)0x0;
      if (local_30 == (int *)0x0) goto LAB_1004710d1;
    }
    piVar2 = local_30;
    if (*local_30 != 1) {
      FUN_100031c40(&local_30);
      piVar2 = local_30;
    }
  }
LAB_1004710d1:
  QMetaObject::tr((char *)&local_40,(char *)&PTR_PTR_100bc18a0,0xa364d4);
  QString::operator=((QString *)(piVar2 + 4),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100471130;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100471130:
  QTime::QTime(local_48,0,0,0,0);
  local_50 = QTime::currentTime();
  uVar1 = QTime::secsTo(local_48);
  qsrand(uVar1);
  piVar2 = (int *)0x0;
  if ((local_30 != (int *)0x0) && (piVar2 = local_30, *local_30 != 1)) {
    FUN_100031c40(&local_30);
    piVar2 = local_30;
  }
  qrand();
  QString::fromUtf8_helper((char *)&local_28,0xa3e2ef);
  QString::operator=((QString *)(piVar2 + 0x10),&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004711d8;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1004711d8:
  local_58[0] = 0xe;
  FUN_1004761a0(param_1,&local_30,local_58,&DAT_1011cc7c0);
  if (local_30 != (int *)0x0) {
    LOCK();
    *local_30 = *local_30 + -1;
    local_19 = *local_30 != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_30 != (int *)0x0)) {
      FUN_100031ed0(local_30);
      operator_delete(local_30);
    }
  }
  return;
}

