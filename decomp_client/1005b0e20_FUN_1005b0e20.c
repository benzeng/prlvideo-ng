
void FUN_1005b0e20(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  QObject *pQVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  long *plVar11;
  byte bVar12;
  Connection local_148 [8];
  Connection local_140 [8];
  QArrayData *local_138;
  undefined1 local_130 [32];
  QString local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [88];
  undefined1 local_70 [40];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar3 = FUN_1005b86c0(uVar2);
  if (lVar3 == 0) {
    FUN_1005b1b50(param_1);
    pcVar10 = "(!)Error: Server instance is null.";
LAB_1005b1044:
    FUN_100df99c0("","prl_client_app",0,pcVar10);
    return;
  }
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  if (((*(long *)(lVar3 + 0x40) == 0) || (*(int *)(*(long *)(lVar3 + 0x40) + 4) == 0)) ||
     (*(long *)(lVar3 + 0x48) == 0)) {
    FUN_1005b1b50(param_1);
    pcVar10 = "(!)Error: Vm configuration instance is null.";
    goto LAB_1005b1044;
  }
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar2,4);
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = 0;
  if ((*(long *)(lVar3 + 0x40) != 0) && (uVar2 = 0, *(int *)(*(long *)(lVar3 + 0x40) + 4) != 0)) {
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  FUN_1005caa30(uVar2);
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  if (*(int *)(lVar3 + 0x50) == 8) {
    uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b69c0(local_c8,uVar2);
    FUN_10073e010(&local_48,local_c8);
    local_d0 = (QArrayData *)QString::fromAscii_helper("_",1);
    local_d8 = (QArrayData *)QString::fromAscii_helper("-",1);
    puVar4 = (undefined8 *)QString::replace(&local_48,&local_d0,&local_d8,1);
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar4;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b0f8b;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1005b0f8b:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b0fc1;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1005b0fc1:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b0ff1;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1005b0ff1:
    FUN_100252c80(local_70);
    FUN_100252e70(local_c8);
  }
  else {
    uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b98f0(&local_40,uVar2);
  }
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  plVar11 = (long *)0x0;
  if ((*(long *)(lVar3 + 0x40) != 0) &&
     (plVar11 = (long *)0x0, *(int *)(*(long *)(lVar3 + 0x40) + 4) != 0)) {
    plVar11 = *(long **)(lVar3 + 0x48);
  }
  pcVar1 = *(code **)(*plVar11 + 0x88);
  local_e0 = (QArrayData *)
             QString::fromAscii_helper("Settings.Runtime.UnattendedInstallLocale",0x28);
  QVariant::QVariant(&local_f0,&local_40);
  (*pcVar1)(plVar11,&local_e0,&local_f0,0);
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b1119;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1005b1119:
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  plVar11 = (long *)0x0;
  if ((*(long *)(lVar3 + 0x40) != 0) &&
     (plVar11 = (long *)0x0, *(int *)(*(long *)(lVar3 + 0x40) + 4) != 0)) {
    plVar11 = *(long **)(lVar3 + 0x48);
  }
  pcVar1 = *(code **)(*plVar11 + 0x88);
  local_f8 = (QArrayData *)
             QString::fromAscii_helper("Settings.Runtime.UnattendedInstallEdition",0x29);
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b9860(local_130,uVar2);
  QVariant::QVariant(&local_108,&local_110);
  (*pcVar1)(plVar11,&local_f8,&local_108,0);
  QVariant::~QVariant(&local_108);
  FUN_1001ea7d0(local_130);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b11eb;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1005b11eb:
  FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b89a0(uVar2,&local_138);
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  bVar12 = *(byte *)(lVar3 + 0x6f);
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  if (*(char *)(lVar3 + 0x6d) != '\0') {
    bVar12 = bVar12 | 2;
  }
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  if (*(char *)(lVar3 + 0x168) != '\0') {
    bVar12 = bVar12 | 8;
  }
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  if (*(char *)(lVar3 + 0x1a0) != '\0') {
    bVar12 = bVar12 | 0x10;
  }
  pQVar5 = operator_new(0x168);
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar6 = FUN_1005b86c0(uVar2);
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = 0;
  if ((*(long *)(lVar3 + 0x40) != 0) && (uVar2 = 0, *(int *)(*(long *)(lVar3 + 0x40) + 4) != 0)) {
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  CAbstractWizardModel::wizardCtrl();
  uVar7 = CWizardController::parentWidget();
  FUN_100209ab0(pQVar5,uVar6,uVar2,bVar12,uVar7);
  piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
  piVar9 = *(int **)(param_1 + 0x28);
  if (piVar9 != piVar8) {
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      piVar9 = *(int **)(param_1 + 0x28);
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar8;
    *(QObject **)(param_1 + 0x30) = pQVar5;
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_31 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar8);
    }
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  QObject::connect(local_140,uVar2,"2vmCreationProgress(int)",param_1,"2vmCreationProgress(int)",0);
  QMetaObject::Connection::~Connection(local_140);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  QObject::connect(local_148,uVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onCreationTaskFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_148);
  CAbstractTask::execute();
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b1427;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1005b1427:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

