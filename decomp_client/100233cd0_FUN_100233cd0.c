
undefined8 FUN_100233cd0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  QString *pQVar6;
  QStringList *pQVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  undefined1 local_98 [24];
  QVariant local_80;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = FUN_100319390(uVar5);
  uVar2 = FUN_10018f860(uVar5);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = FUN_100319390(uVar5);
  uVar3 = FUN_10018f890(uVar5);
  cVar1 = FUN_100110aa0(uVar2,uVar3);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = FUN_100319390(uVar5);
  FUN_10018c2b0(uVar5);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharedApplications();
  cVar1 = CVmSharedApplications::isWinToMac();
  if (cVar1 != '\0') {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onEnableSharedAppsAnswered(PRL_RESULT, Messaging::ButtonID)",0x3c);
  local_80.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_80.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_68,param_1,&local_70,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100233e0b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100233e0b:
  iVar4 = CMessageManager::instance();
  pQVar6 = (QString *)CSearchParentHelper::instance();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003193e0(local_98 + 0x10,uVar5);
  pQVar7 = (QStringList *)
           CSearchParentHelper::getParentForMessage
                     (pQVar6,(bool)((char)local_98 + '\x10'),(QWidget *)0x0);
  local_98._8_8_ = PTR_shared_null_1021e15e8;
  local_98._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)0x3b39,pQVar7,(QStringList *)(local_98 + 8),(CSlotInfo *)local_98,
             SUB81(local_68,0));
  uVar5 = local_98._0_8_;
  if (*(int *)local_98._0_8_ != -1) {
    if (*(int *)local_98._0_8_ != 0) {
      LOCK();
      *(int *)local_98._0_8_ = *(int *)local_98._0_8_ + -1;
      local_29 = *(int *)local_98._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100233f21;
    }
    iVar4 = *(int *)(local_98._0_8_ + 0xc);
    if (iVar4 != *(int *)(local_98._0_8_ + 8)) {
      lVar10 = (long)*(int *)(local_98._0_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar8 = (Data *)(local_98._0_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100233f00:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100233f00;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_100233f21:
  uVar5 = local_98._8_8_;
  if (*(int *)local_98._8_8_ != -1) {
    if (*(int *)local_98._8_8_ != 0) {
      LOCK();
      *(int *)local_98._8_8_ = *(int *)local_98._8_8_ + -1;
      local_29 = *(int *)local_98._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100233fb1;
    }
    iVar4 = *(int *)(local_98._8_8_ + 0xc);
    if (iVar4 != *(int *)(local_98._8_8_ + 8)) {
      lVar10 = (long)*(int *)(local_98._8_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar8 = (Data *)(local_98._8_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100233f90:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100233f90;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_100233fb1:
  if (*(int *)local_98._16_8_ != -1) {
    if (*(int *)local_98._16_8_ != 0) {
      LOCK();
      *(int *)local_98._16_8_ = *(int *)local_98._16_8_ + -1;
      local_29 = *(int *)local_98._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100233fe1;
    }
    QArrayData::deallocate((QArrayData *)local_98._16_8_,2,8);
  }
LAB_100233fe1:
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return 0;
}

