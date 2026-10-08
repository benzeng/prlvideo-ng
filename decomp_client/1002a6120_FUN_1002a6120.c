
undefined4 FUN_1002a6120(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  QArrayData *pQVar2;
  QString local_60;
  AnonymousUnion0 local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("-W",2);
  local_40 = pQVar2;
  FUN_1000341d0(&local_38,&local_40);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a6193;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002a6193:
  FUN_1000341d0(&local_38,param_1);
  if (*(int *)(*param_2 + 0xc) != *(int *)(*param_2 + 8)) {
    pQVar2 = (QArrayData *)QString::fromAscii_helper("--args",6);
    local_48 = pQVar2;
    FUN_1000341d0(&local_38,&local_48);
    FUN_1001d3590(&local_38,param_2);
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a620b;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1002a620b:
  if (1 < DAT_10230ffd0) {
    pQVar2 = (QArrayData *)QString::fromAscii_helper(" ",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_58.field0,(QChar *)&local_38,
               (int)*(undefined8 *)(pQVar2 + 0x10) + (int)pQVar2);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"Install antivirus command [open %s]",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a62b0;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1002a62b0:
    if (*(int *)local_58.field1 != -1) {
      if (*(int *)local_58.field1 != 0) {
        LOCK();
        *(int *)local_58.field1 = *(int *)local_58.field1 + -1;
        local_29 = *(int *)local_58.field1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a62e0;
      }
      QArrayData::deallocate((QArrayData *)local_58.field1,2,8);
    }
LAB_1002a62e0:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a630d;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1002a630d:
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("open",4);
  uVar1 = QProcess::execute(&local_60,(QStringList *)&local_38.field0);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a6364;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1002a6364:
  FUN_100039a80(&local_38);
  return uVar1;
}

