
void FUN_100681940(undefined8 param_1,uint param_2)

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
  ExternalRefCountData *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  if ((param_2 + 0x7ffb8fba < 0x10) && ((0xfc0dU >> (param_2 + 0x7ffb8fba & 0x1f) & 1) != 0)) {
    iVar1 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar2 = (QStringList *)CWizardController::parentWidget();
    local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_40 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_78 = (int *)0x0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = 1;
    CMessageManager::showMessageBox
              (iVar1,(QWidget *)(ulong)param_2,pQVar2,(QStringList *)&local_38.field0,
               (CSlotInfo *)&local_40,SUB81(&local_78,0));
    QVariant::~QVariant((QVariant *)&local_58);
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_29 = *local_78 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_78 != (int *)0x0)) {
        operator_delete(local_78);
      }
    }
    FUN_100039a80(&local_40);
    FUN_100039a80(&local_38);
  }
  return;
}

