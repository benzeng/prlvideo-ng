
void FUN_100662f50(QString *param_1,undefined8 param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  uint uVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  FUN_10075bb90(param_1,param_2,8);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_102223920;
  pQVar1 = operator_new(0x20);
  FUN_100661ba0(pQVar1,param_1,param_1);
  param_1[8].field0_0x0 = pQVar1;
  QMetaObject::tr((char *)&local_48,(char *)&PTR_PTR_1022238e0,0x1e0b997);
  FUN_1001c72e0(&local_50);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_21 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  local_38 = (QArrayData *)local_40.field0_0x0;
  if (1 < *(uint *)local_40.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_40.field0_0x0 = *(uint *)local_40.field0_0x0 + 1;
    local_21 = *(uint *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  uVar2 = *(uint *)(local_40.field0_0x0 + 4);
  if ((1 < *(uint *)local_40.field0_0x0) ||
     ((*(uint *)(local_40.field0_0x0 + 8) & 0x7fffffff) < uVar2 + 2)) {
    QString::reallocData((uint)&local_38,SUB41(uVar2 + 2,0));
    uVar2 = *(uint *)(local_38 + 4);
  }
  *(uint *)(local_38 + 4) = uVar2 + 1;
  *(undefined2 *)(local_38 + (long)(int)uVar2 * 2 + *(long *)(local_38 + 0x10)) = 0x20;
  *(undefined2 *)(local_38 + (long)(int)*(uint *)(local_38 + 4) * 2 + *(long *)(local_38 + 0x10)) =
       0;
  QString::number((int)&local_58,0xc);
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(uint *)local_38 + 1) {
    LOCK();
    *(uint *)local_38 = *(uint *)local_38 + 1;
    local_21 = *(uint *)local_38 != 0;
    UNLOCK();
  }
  QString::append(&local_30);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006630bb;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006630bb:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006630eb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006630eb:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10066311b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10066311b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10066314b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10066314b:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10066317b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10066317b:
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,0x1dd2c37);
  local_60 = local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_21 = *(int *)local_68 != 0;
    UNLOCK();
  }
  QString::insert(&local_60,0,0x20);
  QString::append(&local_30);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100663200;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100663200:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100663230;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100663230:
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

