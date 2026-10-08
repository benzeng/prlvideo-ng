
void FUN_10067a130(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  QStringList *pQVar6;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60 [24];
  QArrayData *local_48;
  AnonymousUnion0 local_40;
  QVariant local_38;
  undefined1 local_21;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar4 = FUN_10016f500(uVar4);
  FUN_10061abe0(&local_38,uVar4,0x13);
  iVar2 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  puVar1 = PTR_shared_null_1021e15e8;
  if (iVar2 != param_2) {
    CContentModel::setBusy(SUB81(param_1,0));
    uVar3 = FUN_1006268d0();
    *(undefined4 *)(param_1 + 0x17c) = uVar3;
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_10068a9e0(*(undefined8 *)(param_1 + 0x20),uVar4,param_2);
    return;
  }
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1001c74e0(&local_48);
  if (*(int *)(local_48 + 4) == 0) {
    pQVar5 = (QArrayData *)QString::fromAscii_helper("",0);
    local_60._8_8_ = pQVar5;
    FUN_1000341d0(&local_40,local_60 + 8);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_21 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10067a2b0;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
  else {
    QString::fromUtf8_helper(local_60 + 0x10,0x1e31adc);
    QString::append((QString *)(local_60 + 0x10));
    FUN_1000341d0(&local_40,local_60 + 0x10);
    if (*(int *)local_60._16_8_ != -1) {
      if (*(int *)local_60._16_8_ != 0) {
        LOCK();
        *(int *)local_60._16_8_ = *(int *)local_60._16_8_ + -1;
        local_21 = *(int *)local_60._16_8_ != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10067a2b0;
      }
      QArrayData::deallocate((QArrayData *)local_60._16_8_,2,8);
    }
  }
LAB_10067a2b0:
  iVar2 = CMessageManager::instance();
  CAbstractWizardModel::wizardCtrl();
  pQVar6 = (QStringList *)CWizardController::parentWidget();
  local_60._0_8_ = puVar1;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0x80000000;
  local_78.field7 = 0;
  local_68 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015499,pQVar6,(QStringList *)&local_40.field0,
             (CSlotInfo *)local_60,SUB81(&local_98,0));
  QVariant::~QVariant((QVariant *)&local_78);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_21 = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  FUN_100039a80(local_60);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10067a38e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10067a38e:
  FUN_100039a80(&local_40);
  return;
}

