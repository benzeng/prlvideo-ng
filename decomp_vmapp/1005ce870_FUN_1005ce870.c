
undefined1 FUN_1005ce870(undefined8 param_1,QString *param_2)

{
  int iVar1;
  undefined1 uVar2;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QFileInfo::path();
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ce8c7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005ce8c7:
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    QFileInfo::absoluteFilePath();
    QString::operator=(param_2,&local_38);
    uVar2 = 1;
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return 1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  return uVar2;
}

