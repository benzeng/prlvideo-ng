
QStringList * FUN_1007d6630(QStringList *param_1,undefined8 param_2,int param_3)

{
  QArrayData *pQVar1;
  int iVar2;
  undefined1 local_58 [8];
  long local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  FUN_100a04400(&local_38);
  FUN_1007caa20(&local_40);
  QSettings::QSettings((QSettings *)local_30,&local_38,&local_40,(QObject *)0x0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d6695;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007d6695:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d66c5;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007d66c5:
  local_48 = (QArrayData *)QString::fromAscii_helper("Posted Reports",0xe);
  QSettings::beginGroup(local_30);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d6717;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007d6717:
  QSettings::allKeys();
  iVar2 = *(int *)(local_50 + 0xc) - *(int *)(local_50 + 8);
  if (param_3 <= iVar2) {
    FUN_1007d90e0(local_58,&local_50,iVar2 - param_3,0xffffffff);
    FUN_1000e5fc0(&local_50,local_58);
    FUN_100039a80(local_58);
  }
  pQVar1 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QtPrivate::QStringList_join
            (param_1,(QChar *)&local_50,(int)*(undefined8 *)(pQVar1 + 0x10) + (int)pQVar1);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d67af;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1007d67af:
  FUN_100039a80(&local_50);
  QSettings::~QSettings((QSettings *)local_30);
  return param_1;
}

