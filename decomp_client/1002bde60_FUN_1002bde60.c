
void FUN_1002bde60(long *param_1)

{
  int iVar1;
  QString local_38;
  undefined1 local_2a;
  
  QObject::sender();
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1348);
  iVar1 = CPasswordDialog::mode();
  if (iVar1 != 2) {
    CPasswordDialog::newPassword();
    QString::operator=((QString *)(param_1 + 0xc),&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_2a = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_2a) goto LAB_1002bdee4;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1002bdee4:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

