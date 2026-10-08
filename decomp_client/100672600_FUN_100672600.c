
void FUN_100672600(long param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  QTextStream *pQVar8;
  long lVar9;
  Data_conflict *pDVar10;
  long lVar11;
  QArrayData *local_1d0;
  QTextStream *local_1c8;
  QDebug local_1c0 [8];
  QTextStream *local_1b8;
  QArrayData *local_1b0;
  QString local_1a8;
  QArrayData *local_1a0;
  Data_conflict local_198;
  undefined4 local_190;
  QString local_188;
  QVariant local_180;
  QArrayData *local_170;
  CDownloadedKeyInfo local_168 [240];
  QString local_78;
  Data_conflict local_70;
  undefined4 local_68;
  QString local_60;
  QVariant local_58;
  QString local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  if (param_2 < 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x50) + 0xc) - *(int *)(*(long *)(param_1 + 0x50) + 8) <= param_2
     ) {
    return;
  }
  QVariant::toMap();
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("active",6);
  if (*(long *)(local_40 + 0x10) == 0) {
LAB_1006726c2:
    lVar9 = 0;
  }
  else {
    lVar3 = *(long *)(local_40 + 0x10);
    lVar11 = 0;
    do {
      while (lVar9 = lVar3, cVar4 = operator<((QString *)(lVar9 + 0x18),&local_48), cVar4 == '\0') {
        lVar3 = *(long *)(lVar9 + 8);
        lVar11 = lVar9;
        if (*(long *)(lVar9 + 8) == 0) goto LAB_1006726b1;
      }
      lVar3 = *(long *)(lVar9 + 0x10);
    } while (*(long *)(lVar9 + 0x10) != 0);
    lVar9 = lVar11;
    if (lVar11 == 0) goto LAB_1006726c2;
LAB_1006726b1:
    cVar4 = operator<(&local_48,(QString *)(lVar9 + 0x18));
    if (cVar4 != '\0') goto LAB_1006726c2;
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006726f4;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1006726f4:
  if (lVar9 != 0) goto LAB_100672d0d;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("trial",5);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  if (*(long *)(local_40 + 0x10) == 0) {
LAB_100672782:
    lVar9 = 0;
  }
  else {
    lVar3 = *(long *)(local_40 + 0x10);
    lVar11 = 0;
    do {
      while (lVar9 = lVar3, cVar4 = operator<((QString *)(lVar9 + 0x18),&local_60), cVar4 == '\0') {
        lVar3 = *(long *)(lVar9 + 8);
        lVar11 = lVar9;
        if (*(long *)(lVar9 + 8) == 0) goto LAB_100672771;
      }
      lVar3 = *(long *)(lVar9 + 0x10);
    } while (*(long *)(lVar9 + 0x10) != 0);
    lVar9 = lVar11;
    if (lVar11 == 0) goto LAB_100672782;
LAB_100672771:
    cVar4 = operator<(&local_60,(QString *)(lVar9 + 0x18));
    if (cVar4 != '\0') goto LAB_100672782;
  }
  pDVar10 = &local_70;
  if (lVar9 != 0) {
    pDVar10 = (Data_conflict *)(lVar9 + 0x20);
  }
  QVariant::QVariant(&local_58,(QVariant *)pDVar10);
  cVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_58);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006727e9;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1006727e9:
  if (cVar4 != '\0') {
    CAbstractWizardPage::wizardModel();
    uVar7 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    FUN_10067a130(uVar7,1);
    goto LAB_100672d0d;
  }
  local_78.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("downloaded",10);
  if (*(long *)(local_40 + 0x10) == 0) {
LAB_100672892:
    lVar9 = 0;
  }
  else {
    lVar3 = *(long *)(local_40 + 0x10);
    lVar11 = 0;
    do {
      while (lVar9 = lVar3, cVar4 = operator<((QString *)(lVar9 + 0x18),&local_78), cVar4 == '\0') {
        lVar3 = *(long *)(lVar9 + 8);
        lVar11 = lVar9;
        if (*(long *)(lVar9 + 8) == 0) goto LAB_100672881;
      }
      lVar3 = *(long *)(lVar9 + 0x10);
    } while (*(long *)(lVar9 + 0x10) != 0);
    lVar9 = lVar11;
    if (lVar11 == 0) goto LAB_100672892;
LAB_100672881:
    cVar4 = operator<(&local_78,(QString *)(lVar9 + 0x18));
    if (cVar4 != '\0') goto LAB_100672892;
  }
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006728c4;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1006728c4:
  if (lVar9 != 0) {
    CDownloadedKeyInfo::CDownloadedKeyInfo(local_168);
    local_188.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("downloaded",10);
    local_190 = 0x80000000;
    local_198.field7 = 0;
    if (*(long *)(local_40 + 0x10) == 0) {
LAB_100672965:
      lVar9 = 0;
    }
    else {
      lVar3 = *(long *)(local_40 + 0x10);
      lVar11 = 0;
      do {
        while (lVar9 = lVar3, cVar4 = operator<((QString *)(lVar9 + 0x18),&local_188), cVar4 == '\0'
              ) {
          lVar3 = *(long *)(lVar9 + 8);
          lVar11 = lVar9;
          if (*(long *)(lVar9 + 8) == 0) goto LAB_100672951;
        }
        lVar3 = *(long *)(lVar9 + 0x10);
      } while (*(long *)(lVar9 + 0x10) != 0);
      lVar9 = lVar11;
      if (lVar11 == 0) goto LAB_100672965;
LAB_100672951:
      cVar4 = operator<(&local_188,(QString *)(lVar9 + 0x18));
      if (cVar4 != '\0') goto LAB_100672965;
    }
    pDVar10 = &local_198;
    if (lVar9 != 0) {
      pDVar10 = (Data_conflict *)(lVar9 + 0x20);
    }
    QVariant::QVariant(&local_180,(QVariant *)pDVar10);
    QVariant::toString();
    iVar6 = CBaseNode::fromString
                      ((QTypedArrayData<unsigned_short> *)local_168,SUB81(&local_170,0),
                       (QString *)0x0,(int *)0x0,(int *)0x0);
    if (iVar6 == 0) {
      bVar5 = CDownloadedKeyInfo::isActiveHere();
      bVar5 = bVar5 ^ 1;
    }
    else {
      bVar5 = 0;
    }
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100672a07;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_100672a07:
    QVariant::~QVariant(&local_180);
    QVariant::~QVariant((QVariant *)&local_198);
    if (*(int *)local_188.field0_0x0 != -1) {
      if (*(int *)local_188.field0_0x0 != 0) {
        LOCK();
        *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
        local_31 = *(int *)local_188.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100672a55;
      }
      QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
    }
LAB_100672a55:
    bVar1 = false;
    if (bVar5 != 0) {
      CAbstractWizardPage::wizardModel();
      uVar7 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
      CDownloadedKeyInfo::getKey();
      FUN_10067e730(uVar7,&local_1a0);
      bVar1 = true;
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100672ad3;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
    }
LAB_100672ad3:
    CDownloadedKeyInfo::~CDownloadedKeyInfo(local_168);
    if (bVar1) goto LAB_100672d0d;
  }
  local_1a8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("appstore_id",0xb);
  if (*(long *)(local_40 + 0x10) == 0) {
LAB_100672b65:
    lVar9 = 0;
  }
  else {
    lVar3 = *(long *)(local_40 + 0x10);
    lVar11 = 0;
    do {
      while (lVar9 = lVar3, cVar4 = operator<((QString *)(lVar9 + 0x18),&local_1a8), cVar4 == '\0')
      {
        lVar3 = *(long *)(lVar9 + 8);
        lVar11 = lVar9;
        if (*(long *)(lVar9 + 8) == 0) goto LAB_100672b51;
      }
      lVar3 = *(long *)(lVar9 + 0x10);
    } while (*(long *)(lVar9 + 0x10) != 0);
    lVar9 = lVar11;
    if (lVar11 == 0) goto LAB_100672b65;
LAB_100672b51:
    cVar4 = operator<(&local_1a8,(QString *)(lVar9 + 0x18));
    if (cVar4 != '\0') goto LAB_100672b65;
  }
  if (*(int *)local_1a8.field0_0x0 != -1) {
    if (*(int *)local_1a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
      local_31 = *(int *)local_1a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100672b9d;
    }
    QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
  }
LAB_100672b9d:
  puVar2 = PTR_shared_null_1021e1288;
  if (lVar9 != 0) goto LAB_100672d0d;
  local_1b0 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar8 = operator_new(0x50);
  QTextStream::QTextStream(pQVar8,&local_1b0,2);
  *(undefined **)(pQVar8 + 0x10) = puVar2;
  *(undefined4 *)(pQVar8 + 0x1c) = 0;
  pQVar8[0x20] = (QTextStream)0x1;
  pQVar8[0x21] = (QTextStream)0x0;
  *(undefined4 *)(pQVar8 + 0x28) = 2;
  *(undefined8 *)(pQVar8 + 0x44) = 0;
  *(undefined8 *)(pQVar8 + 0x3c) = 0;
  *(undefined8 *)(pQVar8 + 0x34) = 0;
  *(undefined8 *)(pQVar8 + 0x2c) = 0;
  *(undefined4 *)(pQVar8 + 0x18) = 2;
  local_1c8 = pQVar8;
  local_1b8 = pQVar8;
  FUN_100673a80(local_1c0,&local_1c8,&local_40);
  QDebug::~QDebug(local_1c0);
  QDebug::~QDebug((QDebug *)&local_1c8);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Unknown plan %d:\n%s",param_2,
                local_1d0 + *(long *)(local_1d0 + 0x10));
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_31 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100672ccb;
    }
    QArrayData::deallocate(local_1d0,1,8);
  }
LAB_100672ccb:
  QDebug::~QDebug((QDebug *)&local_1b8);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100672d0d;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100672d0d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
  return;
}

