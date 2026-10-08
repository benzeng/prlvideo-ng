
undefined1 FUN_10010f190(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  QString local_40;
  QArrayData *local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QString::simplified();
  iVar3 = *(int *)(local_28 + 4);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10010f1dd;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10010f1dd:
  if (iVar3 == 0) {
    return 0;
  }
  FUN_100d898d0(&local_30);
  if (*(int *)(local_30.field0_0x0 + 4) == 0) {
    uVar4 = 0;
    goto LAB_10010f348;
  }
  pQVar1 = param_1->field0_0x0;
  iVar3 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),"~",0xffffffff,1)
  ;
  if (iVar3 == 0) {
    uVar4 = 1;
    QString::operator=(param_1,&local_30);
    goto LAB_10010f348;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("~/",2);
  cVar2 = QString::startsWith(param_1,&local_38,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10010f280;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10010f280:
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    QString::remove((int)param_1,0);
    QString::append(&local_30);
    QDir::cleanPath(&local_40);
    QString::operator=(param_1,&local_40);
    uVar4 = 1;
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10010f348;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_10010f348:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar4;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar4;
}

