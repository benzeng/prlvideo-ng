
undefined4 FUN_1002c1040(long param_1)

{
  int iVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  QArrayData *pQVar4;
  undefined4 uVar5;
  Data *pDVar6;
  long lVar7;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  QString local_78;
  QVariant local_70;
  QString local_60;
  QVariant local_58;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  cVar3 = FUN_10076d460();
  if (cVar3 == '\0') {
    return 0;
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Acronis True Image for Mac already installed");
  }
  if (*(int *)(param_1 + 0x18) == 1) {
    cVar3 = FUN_10076d9e0();
    if (cVar3 == '\0') {
      return 0x80000009;
    }
    pQVar4 = (QArrayData *)QString::fromAscii_helper("AcronisOnlineStore/AcronisOnlineStore",0x25);
    QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
    QString::fromUtf8_helper((char *)&local_38,0x1de41ae);
    QString::append(&local_60);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c1134;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1002c1134:
    QVariant::QVariant(&local_70,false);
    QSettings::value((QString *)&local_48,&local_58);
    cVar3 = QVariant::toBool();
    QVariant::~QVariant(&local_48);
    QVariant::~QVariant(&local_70);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c11a2;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1002c11a2:
    QSettings::~QSettings((QSettings *)&local_58);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c11d8;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1002c11d8:
    if (cVar3 == '\0') {
      return 0x3bfa;
    }
  }
  CAbstractTask::clearSubTaskList();
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("open",4);
  local_80.field1 = (Data *)PTR_shared_null_1021e15e8;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("/Applications/Acronis True Image.app",0x24);
  local_88 = pQVar4;
  FUN_1000341d0(&local_80,&local_88);
  cVar3 = QProcess::startDetached(&local_78,(QStringList *)&local_80.field0);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c126e;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002c126e:
  AVar2 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_29 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c1301;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar7 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar4 == 0) {
LAB_1002c12e0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar6;
            goto LAB_1002c12e0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1002c1301:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c1331;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1002c1331:
  if (cVar3 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Failed to start Acronis True Image for Mac");
  }
  uVar5 = 0x80000009;
  if (cVar3 != '\0') {
    uVar5 = 0;
  }
  return uVar5;
}

