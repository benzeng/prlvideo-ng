
undefined1 FUN_100a59e40(QString *param_1)

{
  int iVar1;
  undefined1 uVar2;
  QLocale local_38 [8];
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  QLocale::QLocale(local_38);
  iVar1 = QLocale::measurementSystem();
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_30,0x1e25514);
    QString::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a59f0f;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  else {
    if (iVar1 != 1) {
      uVar2 = 0;
      goto LAB_100a59f15;
    }
    QString::fromUtf8_helper((char *)&local_28,0x1e289c2);
    QString::operator=(param_1,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_19 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a59f0f;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_100a59f0f:
  uVar2 = 1;
LAB_100a59f15:
  QLocale::~QLocale(local_38);
  return uVar2;
}

