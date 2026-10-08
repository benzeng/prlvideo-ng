
void FUN_10020f230(long *param_1)

{
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    FUN_1001902d0(param_1[4],1);
  }
  CPasswordDialog::newPassword();
  QString::operator=((QString *)(param_1 + 0x12),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10020f2c7;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10020f2c7:
  CPasswordDialog::currentPluginId();
  QString::operator=((QString *)(param_1 + 0x14),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10020f32c;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10020f32c:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

