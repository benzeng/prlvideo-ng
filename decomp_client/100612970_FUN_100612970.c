
void FUN_100612970(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  ExternalRefCountData *local_30;
  AnonymousUnion0 local_28;
  undefined1 local_19;
  
  iVar2 = CMessageManager::instance();
  local_28.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_30 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onFeatureNotAvailableForTrialDialogClosed(PRL_RESULT, Messaging::ButtonID)"
                        ,0x4b);
  local_78 = 0x80000000;
  local_80.field7 = 0;
  FUN_100a1c600(local_68,uVar1,&local_70,&local_80);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015269,(QStringList *)0x0,(QStringList *)&local_28.field0,
             (CSlotInfo *)&local_30,SUB81(local_68,0));
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_19 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100612a5a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100612a5a:
  FUN_100039a80(&local_30);
  FUN_100039a80(&local_28);
  return;
}

