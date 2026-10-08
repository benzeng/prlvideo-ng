
void FUN_1005f51a0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  QStringList *pQVar7;
  char *pcVar8;
  undefined8 uVar9;
  QVariant local_f0;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_88 [24];
  QString local_70;
  QString local_68;
  QVariant local_60;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/Volumes",8);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMSD]",6);
  puVar1 = PTR_shared_null_1021e1288;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar2 = SandboxFileAccessHelpers::checkAvailability(&local_40,&local_48,false,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f5232;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1005f5232:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f5262;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005f5262:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f5292;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005f5292:
  cVar3 = FUN_100d80630(1);
  if (((cVar3 != '\0') && (cVar3 = FUN_1005f3ea0(param_1), cVar3 != '\0')) &&
     (lVar6 = CDeclarativeWizardPage::pageContentItem(), lVar6 != 0)) {
    CDeclarativeWizardPage::pageContentItem();
    QObject::property((char *)&local_60);
    cVar3 = QVariant::toBool();
    if (cVar3 == '\0') {
      local_68.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/Volumes",8);
      local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMSD]",6)
      ;
      QMetaObject::tr(local_88 + 0x10,"",0x1e060b3);
      cVar3 = SandboxFileAccessHelpers::checkAvailability
                        (&local_68,&local_70,true,(QString *)(local_88 + 0x10));
      if (*(int *)local_88._16_8_ != -1) {
        if (*(int *)local_88._16_8_ != 0) {
          LOCK();
          *(int *)local_88._16_8_ = *(int *)local_88._16_8_ + -1;
          local_31 = *(int *)local_88._16_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f5391;
        }
        QArrayData::deallocate((QArrayData *)local_88._16_8_,2,8);
      }
LAB_1005f5391:
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f53c1;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1005f53c1:
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f53f1;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1005f53f1:
      QVariant::~QVariant(&local_60);
      if (cVar3 == '\0') {
        iVar5 = CMessageManager::instance();
        CAbstractWizardPage::wizardCtrl();
        pQVar7 = (QStringList *)CWizardController::parentWidget();
        local_88._8_8_ = PTR_shared_null_1021e15e8;
        local_88._0_8_ = PTR_shared_null_1021e15e8;
        local_c8 = (int *)0x0;
        uStack_c0 = 0;
        local_b0 = 0;
        local_b8 = 0;
        local_a0 = 0x80000000;
        local_a8.field7 = 0;
        local_98 = 1;
        CMessageManager::showMessageBox
                  (iVar5,(QWidget *)0x3c93,pQVar7,(QStringList *)(local_88 + 8),
                   (CSlotInfo *)local_88,SUB81(&local_c8,0));
        QVariant::~QVariant((QVariant *)&local_a8);
        if (local_c8 != (int *)0x0) {
          LOCK();
          *local_c8 = *local_c8 + -1;
          local_31 = *local_c8 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (local_c8 != (int *)0x0)) {
            operator_delete(local_c8);
          }
        }
        FUN_100039a80(local_88);
        FUN_100039a80(local_88 + 8);
      }
    }
    else {
      QVariant::~QVariant(&local_60);
    }
  }
  if (cVar2 != '\0') {
    cVar2 = '\0';
    goto LAB_1005f55dd;
  }
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/Volumes",8);
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMSD]",6);
  local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  cVar2 = SandboxFileAccessHelpers::checkAvailability(&local_d0,&local_d8,false,&local_e0);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f5571;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1005f5571:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f55a7;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1005f55a7:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f55dd;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1005f55dd:
  lVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  cVar3 = FUN_1005f3ea0(param_1);
  *(uint *)(lVar6 + 0x14c) = (cVar3 == '\0') + 1;
  lVar6 = CDeclarativeWizardPage::pageContentItem();
  if (lVar6 != 0) {
    pcVar8 = (char *)CDeclarativeWizardPage::pageContentItem();
    bVar4 = (bool)FUN_1005f3ea0(param_1);
    QVariant::QVariant(&local_f0,bVar4);
    QObject::setProperty(pcVar8,(QVariant *)"autodetectInProgress");
    QVariant::~QVariant(&local_f0);
  }
  if (cVar2 != '\0') {
    uVar9 = FUN_1005ec980(*(long *)(param_1 + 0x10) + 0x38);
    FUN_1005af5b0(uVar9);
  }
  cVar2 = FUN_1005f3ea0(param_1);
  if (cVar2 == '\0') {
    QTimer::stop();
  }
  else {
    FUN_1005f59b0(param_1);
    QTimer::start();
  }
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

