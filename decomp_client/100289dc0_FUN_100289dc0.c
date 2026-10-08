
void FUN_100289dc0(long *param_1)

{
  QString local_30;
  undefined1 local_22;
  
  if ((*(uint *)(param_1 + 3) | 2) == 2) {
    CPasswordDialog::newPassword();
    QString::operator=((QString *)(param_1 + 10),&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_22 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_22) goto LAB_100289e3d;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_100289e3d:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

