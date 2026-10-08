
void FUN_10066a020(long param_1)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  QObject *this;
  Data *pDVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  char *pcVar12;
  QObject *pQVar13;
  long lVar14;
  bool bVar15;
  QVariant local_250;
  int local_23c;
  QVariant local_238;
  QVariant local_228;
  QObject *local_218;
  QObject *local_210;
  CDownloadedKeyInfo local_208 [240];
  Data *local_118;
  Data *local_110;
  Data *local_108;
  uint local_100;
  QArrayData *local_f8;
  CDownloadedKeyList local_f0 [152];
  Data *local_58;
  QString local_50;
  uint *local_48;
  uint *local_40;
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar14 = *(long *)(param_1 + 0x40);
  iVar4 = *(int *)(lVar14 + 8);
  if (iVar4 != *(int *)(lVar14 + 0xc)) {
    plVar10 = (long *)(lVar14 + 0x10 + (long)iVar4 * 8);
    lVar14 = (long)*(int *)(lVar14 + 0xc) * 8 + (long)iVar4 * -8;
    do {
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 0x20))();
      }
      plVar10 = plVar10 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  FUN_1005e7870(plVar1);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
  if (pcVar5 == (char *)0x0) {
    return;
  }
  CAbstractWizardPage::wizardModel();
  lVar14 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  local_50.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar14 + 0x140);
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=((QString *)(param_1 + 0x50),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10066a127;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10066a127:
  CDownloadedKeyList::CDownloadedKeyList(local_f0);
  local_f8 = (QArrayData *)((QString *)(param_1 + 0x50))->field0_0x0;
  if (1 < *(int *)local_f8 + 1U) {
    LOCK();
    *(int *)local_f8 = *(int *)local_f8 + 1;
    local_31 = *(int *)local_f8 != 0;
    UNLOCK();
  }
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_f0,SUB81(&local_f8,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10066a1a1;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10066a1a1:
  local_118 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_118);
      lVar14 = (long)*(int *)(local_118 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_118 + lVar14 * 8) &&
         (lVar8 = *(int *)(local_118 + 0xc) - lVar14,
         lVar8 != 0 && lVar14 <= *(int *)(local_118 + 0xc))) {
        _memcpy(local_118 + lVar14 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_110 = local_118 + (long)*(int *)(local_118 + 8) * 8 + 0x10;
  local_108 = local_118 + (long)*(int *)(local_118 + 0xc) * 8 + 0x10;
  local_100 = 1;
  pQVar13 = (QObject *)0x0;
  if (*(int *)(local_118 + 8) != *(int *)(local_118 + 0xc)) {
    pQVar13 = (QObject *)0x0;
    do {
      CDownloadedKeyInfo::CDownloadedKeyInfo(local_208,*(CDownloadedKeyInfo **)local_110);
      if (local_100 != 0) {
        this = operator_new(0x108);
        QObject::QObject(this,(QObject *)0x0);
        *(undefined ***)this = &PTR_FUN_102223e10;
        CDownloadedKeyInfo::CDownloadedKeyInfo((CDownloadedKeyInfo *)(this + 0x10));
        this[0x100] = (QObject)0x0;
        FUN_100668be0(this,local_208);
        if ((pQVar13 != (QObject *)0x0) ||
           (cVar3 = CDownloadedKeyInfo::isActiveHere(), cVar3 == '\0')) {
          local_210 = this;
          FUN_1000630f0(plVar1,&local_210);
          this = pQVar13;
        }
        pQVar13 = this;
        local_100 = 0;
      }
      CDownloadedKeyInfo::~CDownloadedKeyInfo(local_208);
      local_110 = local_110 + 8;
      uVar7 = local_100 ^ 1;
      bVar15 = local_100 != 1;
      local_100 = uVar7;
    } while ((bVar15) && (local_110 != local_108));
  }
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10066a36b;
    }
    QListData::dispose(local_118);
  }
LAB_10066a36b:
  puVar2 = (uint *)*plVar1;
  uVar7 = puVar2[2];
  if (puVar2[3] == uVar7) goto LAB_10066a52e;
  iVar4 = (int)plVar1;
  if (1 < *puVar2) {
    pDVar6 = (Data *)QListData::detach(iVar4);
    lVar14 = *plVar1;
    lVar8 = (long)*(int *)(lVar14 + 8);
    puVar11 = (uint *)(lVar14 + 0x10 + lVar8 * 8);
    if ((puVar2 + (long)(int)uVar7 * 2 + 4 != puVar11) &&
       (lVar9 = *(int *)(lVar14 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(lVar14 + 0xc))) {
      _memcpy(puVar11,puVar2 + (long)(int)uVar7 * 2 + 4,lVar9 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_31 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066a3ec;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_10066a3ec:
  puVar11 = (uint *)*plVar1;
  puVar2 = puVar11 + (long)(int)puVar11[2] * 2 + 4;
  if (1 < *puVar11) {
    pDVar6 = (Data *)QListData::detach(iVar4);
    lVar14 = *plVar1;
    lVar8 = (long)*(int *)(lVar14 + 8);
    puVar11 = (uint *)(lVar14 + 0x10 + lVar8 * 8);
    if ((puVar2 != puVar11) &&
       (lVar9 = *(int *)(lVar14 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(lVar14 + 0xc))) {
      _memcpy(puVar11,puVar2,lVar9 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_31 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066a466;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_10066a466:
  puVar11 = (uint *)*plVar1;
  if (puVar2 != puVar11 + (long)(int)puVar11[3] * 2 + 4) {
    local_48 = puVar11 + (long)(int)puVar11[3] * 2 + 4;
    local_40 = puVar2;
    FUN_1005ad490(&local_40,&local_48,puVar2,FUN_10066a7c0);
    puVar11 = (uint *)*plVar1;
  }
  if (1 < *puVar11) {
    uVar7 = puVar11[2];
    pDVar6 = (Data *)QListData::detach(iVar4);
    lVar14 = *plVar1;
    lVar8 = (long)*(int *)(lVar14 + 8);
    puVar2 = (uint *)(lVar14 + 0x10 + lVar8 * 8);
    if ((puVar11 + (long)(int)uVar7 * 2 + 4 != puVar2) &&
       (lVar9 = *(int *)(lVar14 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(lVar14 + 0xc))) {
      _memcpy(puVar2,puVar11 + (long)(int)uVar7 * 2 + 4,lVar9 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_31 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10066a514;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_10066a514:
  *(undefined1 *)(*(long *)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 8) * 8) + 0x100) = 1;
LAB_10066a52e:
  if (pQVar13 != (QObject *)0x0) {
    local_218 = pQVar13;
    FUN_10066b130(plVar1,&local_218);
  }
  iVar4 = FUN_10066b190();
  QVariant::QVariant(&local_228,iVar4,plVar1,0);
  QObject::setProperty(pcVar5,(QVariant *)"listModel");
  QVariant::~QVariant(&local_228);
  local_23c = -(uint)(pQVar13 == (QObject *)0x0);
  QVariant::QVariant(&local_238,2,&local_23c,0);
  QObject::setProperty(pcVar5,(QVariant *)"listViewCurrentIndex");
  QVariant::~QVariant(&local_238);
  CAbstractWizardPage::wizardModel();
  lVar14 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  if (*(int *)(lVar14 + 0x148) == 1) {
    pcVar12 = "ProgressState";
  }
  else {
    pcVar12 = "WorkState";
  }
  QVariant::QVariant(&local_250,pcVar12);
  QObject::setProperty(pcVar5,(QVariant *)"state");
  QVariant::~QVariant(&local_250);
  CAbstractWizardPage::wizardModel();
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  CDownloadedKeyList::~CDownloadedKeyList(local_f0);
  return;
}

