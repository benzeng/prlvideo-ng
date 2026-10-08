
void FUN_1005fd370(QObject *param_1)

{
  long lVar1;
  CAbstractProgressOperation *this;
  undefined4 **ppuVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(int *)(param_1 + 0x10) != 9) {
    return;
  }
  QMetaObject::tr((char *)&local_38,(char *)&PTR_PTR_102220650,0x1e0667b);
  lVar1 = FUN_1005ec990(param_1 + 0x38);
  local_40 = *(QArrayData **)(lVar1 + 0x178);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  CAbstractWizardPage::setTitle((QString *)param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005fd427;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005fd427:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005fd457;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005fd457:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005fd487;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005fd487:
  this = operator_new(0x48);
  ppuVar2 = (undefined4 **)FUN_1005ec970(param_1 + 0x38);
  CAbstractProgressOperation::CAbstractProgressOperation(this,param_1);
  this->field0_0x0 = (undefined4 **)&PTR_FUN_1021f4da0;
  this[1].field0_0x0 = ppuVar2;
  FUN_1005fcd50(this);
  *(CAbstractProgressOperation **)(param_1 + 0x40) = this;
  return;
}

