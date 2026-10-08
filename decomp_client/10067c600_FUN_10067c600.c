
void FUN_10067c600(long param_1,uint param_2)

{
  int iVar1;
  QStringList *pQVar2;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  ExternalRefCountData *local_38;
  AnonymousUnion0 local_30;
  undefined1 local_21;
  
  CContentModel::setBusy(SUB81(param_1,0));
  *(int *)(param_1 + 0x158) = ((int)param_2 >> 0x1f) + 3;
  if ((int)param_2 < 0) {
    iVar1 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar2 = (QStringList *)CWizardController::parentWidget();
    local_30.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_38 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_78 = (int *)0x0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = 1;
    CMessageManager::showMessageBox
              (iVar1,(QWidget *)(ulong)param_2,pQVar2,(QStringList *)&local_30.field0,
               (CSlotInfo *)&local_38,SUB81(&local_78,0));
    QVariant::~QVariant((QVariant *)&local_58);
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_21 = *local_78 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_78 != (int *)0x0)) {
        operator_delete(local_78);
      }
    }
    FUN_100039a80(&local_38);
    FUN_100039a80(&local_30);
  }
  else if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
          (*(long *)(param_1 + 0x60) != 0)) {
    FUN_100677d80(param_1);
    return;
  }
  return;
}

