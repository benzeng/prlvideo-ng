
undefined8 FUN_100b4c130(char *param_1,QChar *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  QArrayData *pQVar4;
  size_t sVar5;
  QArrayData *pQVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  QArrayData *local_80;
  QArrayData *local_78;
  AnonymousUnion0 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  AnonymousUnion0 local_58;
  QArrayData *local_50;
  QProcess local_48 [23];
  undefined1 local_31;
  
  QProcess::QProcess(local_48,(QObject *)0x0);
  if (1 < DAT_10230ffd0) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper(" ",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_58.field0,param_2,
               (int)*(undefined8 *)(pQVar4 + 0x10) + (int)pQVar4);
    QString::toUtf8();
    FUN_100df99c0("","prl_net",2,"%s %s",param_1,local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b4c1f6;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100b4c1f6:
    if (*(int *)local_58.field1 != -1) {
      if (*(int *)local_58.field1 != 0) {
        LOCK();
        *(int *)local_58.field1 = *(int *)local_58.field1 + -1;
        local_31 = *(int *)local_58.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b4c226;
      }
      QArrayData::deallocate((QArrayData *)local_58.field1,2,8);
    }
LAB_100b4c226:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b4c253;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_100b4c253:
  iVar2 = -1;
  if (param_1 != (char *)0x0) {
    sVar5 = _strlen(param_1);
    iVar2 = (int)sVar5;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(param_1,iVar2);
  QProcess::start(local_48,&local_60,param_2,3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b4c2b9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100b4c2b9:
  cVar1 = QProcess::waitForFinished((int)local_48);
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_net",0,"%s tool not responding. Terminate it now.",param_1);
    uVar7 = 0x80000016;
    QProcess::kill();
    goto LAB_100b4c4fd;
  }
  iVar2 = QProcess::exitCode();
  uVar7 = 0;
  if (iVar2 == 0) goto LAB_100b4c4fd;
  pQVar4 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_70.field0,param_2,
             (int)*(undefined8 *)(pQVar4 + 0x10) + (int)pQVar4);
  QString::toUtf8();
  pQVar8 = local_68 + *(long *)(local_68 + 0x10);
  uVar3 = QProcess::exitCode();
  QProcess::readAllStandardOutput();
  if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_78,*(uint *)(local_78 + 4) + 1,*(uint *)(local_78 + 8) >> 0x1f);
  }
  pQVar6 = local_78 + *(long *)(local_78 + 0x10);
  QProcess::readAllStandardError();
  if ((1 < *(uint *)local_80) || (*(long *)(local_80 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_80,*(uint *)(local_80 + 4) + 1,*(uint *)(local_80 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_net",0,"%s utility failed: %s %s [%d]\nout=%s\nerr=%s",param_1,param_1,
                pQVar8,uVar3,pQVar6,local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b4c40a;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_100b4c40a:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b4c43a;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100b4c43a:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b4c46a;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100b4c46a:
  if (*(int *)local_70.field1 != -1) {
    if (*(int *)local_70.field1 != 0) {
      LOCK();
      *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
      local_31 = *(int *)local_70.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b4c49a;
    }
    QArrayData::deallocate((QArrayData *)local_70.field1,2,8);
  }
LAB_100b4c49a:
  uVar7 = 0x80000016;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b4c4fd;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b4c4fd:
  QProcess::~QProcess(local_48);
  return uVar7;
}

