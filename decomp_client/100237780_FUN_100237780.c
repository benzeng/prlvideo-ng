
undefined8 FUN_100237780(long param_1)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  CTaskGenericId *pCVar11;
  QString *pQVar12;
  QStringList *pQVar13;
  Data *pDVar14;
  QArrayData *pQVar15;
  QStringList *pQVar16;
  byte local_ec;
  undefined1 local_e0 [24];
  QVariant local_c8;
  QArrayData *local_b8;
  int *local_b0 [4];
  QVariant local_90 [2];
  QArrayData *local_78;
  Connection local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  CTaskGenericId local_58 [24];
  QArrayData *local_40;
  int local_34;
  
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar4 = FUN_100319ae0(uVar9);
  if ((iVar4 == 0) && (*(char *)(param_1 + 0x36) == '\0')) {
    return 0;
  }
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar6 = FUN_100319390(uVar9);
  uVar7 = FUN_100152280();
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003193e0(&local_40,uVar9);
  lVar8 = FUN_1001547d0(uVar7,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) goto LAB_10023784a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10023784a:
  uVar9 = FUN_1001d50a0();
  cVar2 = FUN_1001d5140(uVar9,&local_34);
  if ((((lVar8 == 0) || (lVar6 == 0)) ||
      (cVar2 != '\0' && (local_34 == -0x7ffffdb7 || local_34 == -0x7ffffdaf))) ||
     (iVar4 = FUN_10015a6e0(lVar8), iVar4 == 1)) {
    *(undefined4 *)(param_1 + 0x5c) = 5;
    return 0;
  }
  cVar2 = FUN_1001b7ee0(lVar6);
  if (cVar2 != '\0') {
    uVar9 = FUN_1001d50a0();
    cVar2 = FUN_1001d5140(uVar9,0);
    if (cVar2 == '\0') {
      pCVar11 = (CTaskGenericId *)CTaskManager::instance();
      FUN_100188480(&local_60,lVar6);
      FUN_10021bfc0(local_58,&local_60);
      lVar8 = CTaskManager::getTaskById(pCVar11);
      CTaskGenericId::~CTaskGenericId(local_58);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          local_34 = CONCAT31(local_34._1_3_,*(int *)local_60 != 0);
          if (*(int *)local_60 != 0) goto LAB_100237ac4;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100237ac4:
      if (lVar8 != 0) {
        return 0;
      }
      pvVar10 = operator_new(0x40);
      uVar9 = FUN_100370280();
      FUN_100188480(&local_68,lVar6);
      uVar9 = FUN_1003704b0(uVar9,&local_68,DAT_100e152b8);
      FUN_10021b330(pvVar10,1,lVar6,uVar9);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          UNLOCK();
          local_34 = CONCAT31(local_34._1_3_,*(int *)local_68 != 0);
          if (*(int *)local_68 != 0) goto LAB_100237b49;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100237b49:
      QObject::connect(local_70,pvVar10,"2taskFinished(PRL_RESULT)",param_1,
                       "1onCancelInstallationTaskFinished(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection(local_70);
      CAbstractTask::setWaitForSubTaskCompletion();
      CAbstractTask::execute();
      return 0;
    }
  }
  cVar2 = FUN_100075300();
  if (cVar2 == '\0') {
    local_ec = 0;
  }
  else {
    uVar9 = FUN_100078040();
    local_ec = FUN_10007acd0(uVar9);
    local_ec = local_ec ^ 1;
  }
  iVar4 = FUN_10018a9d0(lVar6);
  if (((iVar4 != 0x30000004) && (iVar4 = FUN_10018a9d0(lVar6), iVar4 != 0x30000005)) ||
     (iVar4 = *(int *)(param_1 + 0x3c), iVar4 == 0xffff)) {
    iVar4 = FUN_10018a9d0(lVar6);
    if (iVar4 != 0x30000004) {
      iVar5 = FUN_10018a9d0(lVar6);
      iVar4 = 0xffff;
      if (iVar5 != 0x30000005) goto LAB_100237985;
    }
    FUN_10018c2b0(lVar6);
    CVmConfiguration::getVmSettings();
    CVmSettings::getShutdown();
    iVar4 = Shutdown::getOnVmWindowClose();
  }
LAB_100237985:
  if (DAT_102310920 == (void *)0x0) {
    pvVar10 = operator_new(0x50);
    FUN_1001d1080(pvVar10);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar10;
  }
  cVar2 = FUN_1001d1250();
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = UpgradeUtils::isNeedToInstallUpdateOnAppStart((int *)0x0);
  }
  uVar9 = FUN_1001d50a0();
  cVar2 = FUN_1001d5140(uVar9,0);
  if ((((local_ec | bVar3) == 1) && (cVar2 != '\0')) &&
     (((iVar5 = FUN_10018a9d0(lVar6), iVar5 == 0x30000004 ||
       (iVar5 = FUN_10018a9d0(lVar6), iVar5 == 0x30000005)) &&
      ((iVar4 != 5 || (*(char *)(lVar8 + 0x13a) == '\0')))))) {
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 0;
  }
  switch(iVar4) {
  case 0:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    break;
  case 2:
    goto switchD_100237a4a_caseD_2;
  case 4:
    *(undefined4 *)(param_1 + 0x5c) = 4;
    break;
  case 5:
    uVar9 = FUN_10018d490(lVar6);
    cVar2 = FUN_1001754c0(uVar9,0x10);
    if (cVar2 != '\0') {
      if (*(char *)(lVar8 + 0x13a) != '\0') {
        return 0;
      }
      uVar9 = FUN_1001d50a0();
      cVar2 = FUN_1001d5140(uVar9,0);
      if (cVar2 == '\0') {
        return 0;
      }
    }
switchD_100237a4a_caseD_2:
    pQVar12 = (QString *)CSearchParentHelper::instance();
    FUN_100188480(&local_78,lVar6);
    pQVar13 = (QStringList *)
              CSearchParentHelper::getParentForMessage(pQVar12,SUB81(&local_78,0),(QWidget *)0x1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        local_34 = CONCAT31(local_34._1_3_,*(int *)local_78 != 0);
        if (*(int *)local_78 != 0) goto LAB_100237c56;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100237c56:
    pQVar16 = (QStringList *)0x0;
    if ((pQVar13 != (QStringList *)0x0) &&
       (pQVar16 = pQVar13, (*(byte *)((long)pQVar13[5].field0_0x0.field1 + 9) & 0x80) == 0)) {
      pQVar16 = (QStringList *)0x0;
      FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                    "Tasks/CTaskSwitchVmDesktopViewMode.cpp",0x537,"confirmSwitch");
    }
    local_b8 = (QArrayData *)
               QString::fromAscii_helper
                         ("1onUserActionOnCloseSelected(PRL_RESULT, Messaging::ButtonID)",0x3d);
    local_c8.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
    local_c8.field0_0x0.field0_0x0.field7 = 0;
    FUN_100a1c600(local_b0,param_1,&local_b8,&local_c8);
    QVariant::~QVariant(&local_c8);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        UNLOCK();
        local_34 = CONCAT31(local_34._1_3_,*(int *)local_b8 != 0);
        if (*(int *)local_b8 != 0) goto LAB_100237d3c;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100237d3c:
    iVar4 = CMessageManager::instance();
    puVar1 = PTR_shared_null_1021e15e8;
    local_e0._16_8_ = PTR_shared_null_1021e15e8;
    FUN_10018d830(local_e0 + 8,lVar6);
    FUN_1000341d0(local_e0 + 0x10,local_e0 + 8);
    local_e0._0_8_ = puVar1;
    CMessageManager::showMessageBox
              (iVar4,(QWidget *)0x80015356,pQVar16,(QStringList *)(local_e0 + 0x10),
               (CSlotInfo *)local_e0,SUB81(local_b0,0));
    uVar9 = local_e0._0_8_;
    if (*(int *)local_e0._0_8_ != -1) {
      if (*(int *)local_e0._0_8_ != 0) {
        LOCK();
        *(int *)local_e0._0_8_ = *(int *)local_e0._0_8_ + -1;
        UNLOCK();
        local_34 = CONCAT31(local_34._1_3_,*(int *)local_e0._0_8_ != 0);
        if (*(int *)local_e0._0_8_ != 0) goto LAB_100237e31;
      }
      iVar4 = *(int *)(local_e0._0_8_ + 0xc);
      if (iVar4 != *(int *)(local_e0._0_8_ + 8)) {
        lVar6 = (long)*(int *)(local_e0._0_8_ + 8) * 8 + (long)iVar4 * -8;
        pDVar14 = (Data *)(local_e0._0_8_ + (long)iVar4 * 8 + 8);
        do {
          pQVar15 = *(QArrayData **)pDVar14;
          if (*(int *)pQVar15 == 0) {
LAB_100237e10:
            QArrayData::deallocate(pQVar15,2,8);
          }
          else if (*(int *)pQVar15 != -1) {
            LOCK();
            *(int *)pQVar15 = *(int *)pQVar15 + -1;
            UNLOCK();
            local_34 = CONCAT31(local_34._1_3_,*(int *)pQVar15 != 0);
            if (*(int *)pQVar15 == 0) {
              pQVar15 = *(QArrayData **)pDVar14;
              goto LAB_100237e10;
            }
          }
          pDVar14 = pDVar14 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose((Data *)uVar9);
    }
LAB_100237e31:
    if (*(int *)local_e0._8_8_ != -1) {
      if (*(int *)local_e0._8_8_ != 0) {
        LOCK();
        *(int *)local_e0._8_8_ = *(int *)local_e0._8_8_ + -1;
        UNLOCK();
        local_34 = CONCAT31(local_34._1_3_,*(int *)local_e0._8_8_ != 0);
        if (*(int *)local_e0._8_8_ != 0) goto LAB_100237e67;
      }
      QArrayData::deallocate((QArrayData *)local_e0._8_8_,2,8);
    }
LAB_100237e67:
    uVar9 = local_e0._16_8_;
    if (*(int *)local_e0._16_8_ != -1) {
      if (*(int *)local_e0._16_8_ != 0) {
        LOCK();
        *(int *)local_e0._16_8_ = *(int *)local_e0._16_8_ + -1;
        UNLOCK();
        local_34 = CONCAT31(local_34._1_3_,*(int *)local_e0._16_8_ != 0);
        if (*(int *)local_e0._16_8_ != 0) goto LAB_100237ef1;
      }
      iVar4 = *(int *)(local_e0._16_8_ + 0xc);
      if (iVar4 != *(int *)(local_e0._16_8_ + 8)) {
        lVar6 = (long)*(int *)(local_e0._16_8_ + 8) * 8 + (long)iVar4 * -8;
        pDVar14 = (Data *)(local_e0._16_8_ + (long)iVar4 * 8 + 8);
        do {
          pQVar15 = *(QArrayData **)pDVar14;
          if (*(int *)pQVar15 == 0) {
LAB_100237ed0:
            QArrayData::deallocate(pQVar15,2,8);
          }
          else if (*(int *)pQVar15 != -1) {
            LOCK();
            *(int *)pQVar15 = *(int *)pQVar15 + -1;
            UNLOCK();
            local_34 = CONCAT31(local_34._1_3_,*(int *)pQVar15 != 0);
            if (*(int *)pQVar15 == 0) {
              pQVar15 = *(QArrayData **)pDVar14;
              goto LAB_100237ed0;
            }
          }
          pDVar14 = pDVar14 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose((Data *)uVar9);
    }
LAB_100237ef1:
    CAbstractTask::setWaitForSubTaskCompletion();
    MacUtils::bringProcessToFront();
    QVariant::~QVariant(local_90);
    if (local_b0[0] != (int *)0x0) {
      LOCK();
      *local_b0[0] = *local_b0[0] + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*local_b0[0] != 0);
      if ((*local_b0[0] == 0) && (local_b0[0] != (int *)0x0)) {
        operator_delete(local_b0[0]);
      }
    }
  }
  return 0;
}

