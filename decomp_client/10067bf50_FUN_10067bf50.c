
void FUN_10067bf50(QObject *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  QStringList *pQVar5;
  undefined8 uVar6;
  undefined1 local_e8 [24];
  AnonymousUnion0 local_d0;
  Data_conflict local_c8;
  bool local_c0;
  QArrayData *local_b8;
  int *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  QVariant local_90;
  undefined1 local_80;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_31;
  
  CContentModel::setBusy(SUB81(param_1,0));
  *(int *)(param_1 + 0x154) = ((int)param_2 >> 0x1f) + 3;
  if (-1 < (int)param_2) {
    if ((((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
        (*(long *)(param_1 + 0x60) != 0)) &&
       (iVar3 = CAbstractWizardModel::currentPageId(), iVar3 != 2)) {
      CContentModel::setBusy(SUB81(param_1,0));
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x60);
      }
      FUN_100689870(*(undefined8 *)(param_1 + 0x20),uVar6);
    }
    goto LAB_10067c301;
  }
  cVar2 = FUN_10061c760(param_2);
  if (cVar2 != '\0') {
    FUN_10084a980(param_1,param_2);
    uVar4 = CAbstractWizardModel::currentPageId();
    if ((0xb < uVar4) || ((0x818U >> (uVar4 & 0x1f) & 1) == 0)) {
      *(uint *)(param_1 + 0x164) = uVar4;
    }
    CAbstractWizardModel::goToPage(param_1,3,0);
    return;
  }
  cVar2 = FUN_10061c740(param_2);
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_48 = 1;
  iVar3 = CAbstractWizardModel::currentPageId();
  if (iVar3 == 2) {
    if (cVar2 == '\0') {
      QTimer::singleShot(3000,param_1,"1onActivateOnlinePageTimeout()");
    }
    else {
      local_b8 = (QArrayData *)QString::fromAscii_helper("1onBadKeyMessageClosed()",0x18);
      local_c0 = 0x80000000;
      local_c8.field7 = 0;
      FUN_100a1c600(&local_b0,param_1,&local_b8,&local_c8);
      piVar1 = local_b0;
      if (local_78 != local_b0) {
        if (local_b0 != (int *)0x0) {
          LOCK();
          *local_b0 = *local_b0 + 1;
          local_31 = *local_b0 != 0;
          UNLOCK();
        }
        if (local_78 != (int *)0x0) {
          LOCK();
          *local_78 = *local_78 + -1;
          local_31 = *local_78 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (local_78 != (int *)0x0)) {
            operator_delete(local_78);
          }
        }
        local_78 = piVar1;
        uStack_70 = local_a8;
      }
      local_60 = local_98;
      local_68 = local_a0;
      QVariant::operator=((QVariant *)&local_58,&local_90);
      local_48 = local_80;
      QVariant::~QVariant(&local_90);
      if (local_b0 != (int *)0x0) {
        LOCK();
        *local_b0 = *local_b0 + -1;
        local_31 = *local_b0 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_b0 != (int *)0x0)) {
          operator_delete(local_b0);
        }
      }
      QVariant::~QVariant((QVariant *)&local_c8);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10067c1ce;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_10067c1ce:
      iVar3 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar5 = (QStringList *)CWizardController::parentWidget();
      local_d0.field1 = (Data *)PTR_shared_null_1021e15e8;
      local_e8._16_8_ = PTR_shared_null_1021e15e8;
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)(ulong)param_2,pQVar5,(QStringList *)&local_d0.field0,
                 (CSlotInfo *)(local_e8 + 0x10),SUB81(&local_78,0));
      FUN_100039a80(local_e8 + 0x10);
      FUN_100039a80(&local_d0);
    }
  }
  else if (cVar2 == '\0') {
    FUN_10067c4e0(param_1);
  }
  else {
    iVar3 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar5 = (QStringList *)CWizardController::parentWidget();
    local_e8._8_8_ = PTR_shared_null_1021e15e8;
    local_e8._0_8_ = PTR_shared_null_1021e15e8;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)(ulong)param_2,pQVar5,(QStringList *)(local_e8 + 8),
               (CSlotInfo *)local_e8,SUB81(&local_78,0));
    FUN_100039a80(local_e8);
    FUN_100039a80(local_e8 + 8);
  }
  QVariant::~QVariant((QVariant *)&local_58);
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_31 = *local_78 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
LAB_10067c301:
  FUN_10084a980(param_1,param_2);
  return;
}

