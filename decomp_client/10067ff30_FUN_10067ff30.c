
void FUN_10067ff30(long param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  size_t sVar14;
  int iVar15;
  undefined8 *puVar16;
  QArrayData *local_f0;
  QArrayData *local_e8;
  _func_void_Node_ptr *local_e0;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  QArrayData *local_50;
  QString local_48 [2];
  undefined1 local_31;
  
  CContentModel::setBusy(SUB81(param_1,0));
  if (param_2 < 0) {
    CAbstractWizardModel::wizardCtrl();
    uVar12 = CWizardController::parentWidget();
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    local_a8 = 1;
    uVar11 = 0;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x70);
    }
    FUN_100621ac0(param_2,uVar12,&local_d8,uVar11);
    QVariant::~QVariant((QVariant *)&local_b8);
    if (local_d8 != (int *)0x0) {
      LOCK();
      *local_d8 = *local_d8 + -1;
      local_31 = *local_d8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_d8 != (int *)0x0)) {
        operator_delete(local_d8);
      }
    }
    if (param_2 != -0x7ffb8fde) goto LAB_100680342;
    plVar13 = (long *)CAbstractWizardModel::actionStateProvider();
    pcVar2 = *(code **)(*plVar13 + 0x68);
    uVar10 = CAbstractWizardModel::currentPageId();
    (*pcVar2)(&local_e0,plVar13,0,uVar10);
    pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar15 = -1;
    if (pcVar3 != (char *)0x0) {
      sVar14 = _strlen(pcVar3);
      iVar15 = (int)sVar14;
    }
    local_e8 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar15);
    FUN_1002edf40(&local_e0,&local_e8);
    cVar6 = QVariant::toBool();
    bVar7 = 1;
    if (cVar6 != '\0') {
      pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar15 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar14 = _strlen(pcVar3);
        iVar15 = (int)sVar14;
      }
      local_f0 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar15);
      FUN_1002edf40(&local_e0,&local_f0);
      bVar7 = QVariant::toBool();
      bVar7 = bVar7 ^ 1;
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100680276;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
    }
LAB_100680276:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006802ac;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1006802ac:
    if (bVar7 != 0) {
      CAbstractWizardModel::restart();
    }
    if (*(int *)(local_e0 + 0x10) != -1) {
      if (*(int *)(local_e0 + 0x10) != 0) {
        LOCK();
        pcVar2 = local_e0 + 0x10;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        UNLOCK();
        if (*(int *)pcVar2 != 0) goto LAB_100680342;
        local_31 = 0;
      }
      QHashData::free_helper(local_e0);
    }
    goto LAB_100680342;
  }
  uVar5 = FUN_1006269e0(*(undefined4 *)(param_1 + 0x17c));
  iVar15 = *(int *)(param_1 + 0x17c);
  iVar8 = FUN_1006268d0();
  iVar1 = *(int *)(param_1 + 0x17c);
  iVar9 = FUN_1006268d0();
  if (iVar1 != iVar9) {
    QSettings::QSettings((QSettings *)local_48,(QObject *)0x0);
    local_50 = (QArrayData *)QString::fromAscii_helper("LicenseUpgradeToPro",0x13);
    QSettings::remove(local_48);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067ffe6;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10067ffe6:
    QSettings::~QSettings((QSettings *)local_48);
  }
  uVar10 = FUN_1006268d0();
  *(undefined4 *)(param_1 + 0x17c) = uVar10;
  local_90 = (QArrayData *)QString::fromAscii_helper("1onRenewLicenseMessageClosed()",0x1e);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  FUN_100a1c600(local_88,param_1,&local_90,&local_a0);
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100680085;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100680085:
  if (iVar15 == iVar8) {
    CAbstractWizardModel::wizardCtrl();
    uVar11 = CWizardController::parentWidget();
    FUN_100622fa0(0x3c72,uVar11,local_88);
  }
  else {
    CAbstractWizardModel::wizardCtrl();
    uVar11 = CWizardController::parentWidget();
    FUN_100622920(uVar5,uVar11,local_88);
  }
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_31 = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
LAB_100680342:
  puVar16 = (undefined8 *)(param_1 + 0x68);
  piVar4 = (int *)*puVar16;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_31 = *piVar4 != 0;
    UNLOCK();
    if ((!(bool)local_31) && ((void *)*puVar16 != (void *)0x0)) {
      operator_delete((void *)*puVar16);
    }
    *puVar16 = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}

