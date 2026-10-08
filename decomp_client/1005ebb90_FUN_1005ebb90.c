
void FUN_1005ebb90(QString *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_1005ecd90(param_1,param_2,0x13,0);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_10221f520;
  uVar1 = FUN_1005ec990(param_1 + 7);
  lVar2 = FUN_1005b87b0(uVar1);
  if (lVar2 == 0) {
    return;
  }
  QMetaObject::tr((char *)&local_38,(char *)&PTR_PTR_10221f4e0,0x1e05b8e);
  FUN_10018f890(lVar2);
  EnumUtils::OsVerToString((uint)&local_40);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e31adc);
  QString::append(&local_50);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ebc74;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005ebc74:
  local_48.field0_0x0 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_21 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ebcd6;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005ebcd6:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ebd06;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1005ebd06:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ebd36;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005ebd36:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

