
undefined8 FUN_1002242c0(long param_1)

{
  int iVar1;
  QStringList *pQVar2;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  ExternalRefCountData *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar1 = CMessageManager::instance();
  local_40 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  pQVar2 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (pQVar2 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
    pQVar2 = *(QStringList **)(param_1 + 0x38);
  }
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_38,param_1 + 0x20);
  local_80 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onDeleteImmediatelyQuestionAns( PRL_RESULT, Messaging::ButtonID )",0x42);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c600(local_78,param_1,&local_80,&local_90);
  CMessageManager::showMessageBox
            (iVar1,(QWidget *)0x36cb,pQVar2,(QStringList *)&local_38.field0,(CSlotInfo *)&local_40,
             SUB81(local_78,0));
  QVariant::~QVariant(local_58);
  if (local_78[0] != (int *)0x0) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    local_29 = *local_78[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78[0] != (int *)0x0)) {
      operator_delete(local_78[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002243df;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002243df:
  FUN_100039a80(&local_40);
  FUN_100039a80(&local_38);
  return 0;
}

