
void FUN_1005eb5a0(QString *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_1005ecd90(param_1,param_2,0x10,0);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_10221f3f0;
  uVar2 = FUN_1005ec990(param_1 + 7);
  lVar3 = FUN_1005b87b0(uVar2);
  if (lVar3 == 0) goto LAB_1005eb7e9;
  QMetaObject::tr((char *)&local_38,(char *)&PTR_PTR_10221f3b0,0x1ddc56f);
  uVar2 = FUN_1005ec990(param_1 + 7);
  iVar1 = FUN_1005b9800(uVar2);
  if (iVar1 == 0) {
    QMetaObject::tr((char *)&local_40,(char *)&PTR_PTR_10221f3b0,0x1dc6c8f);
    QString::operator=(&local_38,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005eb679;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1005eb679:
  FUN_10018f890(lVar3);
  EnumUtils::OsVerToString((uint)&local_48);
  local_58.field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e31adc);
  QString::append(&local_58);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eb6f7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005eb6f7:
  local_50.field0_0x0 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_21 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eb759;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1005eb759:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eb789;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1005eb789:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eb7b9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005eb7b9:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005eb7e9;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1005eb7e9:
  FUN_10037dd60("VmScreenshot",1,0,"VmScreenshot");
  return;
}

