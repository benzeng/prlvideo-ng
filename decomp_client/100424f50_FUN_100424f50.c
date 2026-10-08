
void FUN_100424f50(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar1 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar2 = FUN_1001548f0(uVar1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100424fc6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100424fc6:
  if (lVar2 == 0) {
    return;
  }
  if (-1 < param_2) {
    FUN_100838050(param_1,0);
    FUN_1008380a0(param_1);
    return;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)QString::fromAscii_helper("<font color=\'red\'>%1</font>",0x1b);
  QMetaObject::tr((char *)&local_58,(char *)&PTR_staticMetaObject_102210f10,0x1df3a8e);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  QString::operator=(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100425080;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100425080:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004250b0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004250b0:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004250e0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004250e0:
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0xb0));
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

