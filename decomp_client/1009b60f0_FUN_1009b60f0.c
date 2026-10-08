
void FUN_1009b60f0(long param_1,int param_2)

{
  QString local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (param_2 != 0x8b17069) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
    QString::operator=((QString *)(param_1 + 0x50),&local_30);
    FUN_1009b4cd0(param_1);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_11 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1009b61f6;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_1009b61f6:
    CAbstractWizardPage::pageFinished();
    return;
  }
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1009b64f0(param_1,0x8b17069,&local_20,&local_28);
  FUN_1009b6410(param_1,&local_20,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009b6169;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009b6169:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

