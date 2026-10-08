
void FUN_1007e1430(long *param_1,int param_2)

{
  int iVar1;
  QStringList *pQVar2;
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  ExternalRefCountData *local_50;
  QArrayData *local_48;
  AnonymousUnion0 local_40 [2];
  
  if (param_2 != 0) {
    if (param_2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0001007e146a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,0);
      return;
    }
    if (param_2 != 3) {
      return;
    }
  }
  iVar1 = CMessageManager::instance();
  local_50 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  pQVar2 = (QStringList *)0x0;
  if ((param_1[3] != 0) && (pQVar2 = (QStringList *)0x0, *(int *)(param_1[3] + 4) != 0)) {
    pQVar2 = (QStringList *)param_1[4];
  }
  local_40[0].field1 = (Data *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_48,(char *)&PTR_staticMetaObject_10222ee00,0x1e02538);
  FUN_1000341d0(local_40,&local_48);
  local_90 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  FUN_100a1c600(local_88,param_1,&local_90,&local_a0);
  CMessageManager::showMessageBox
            (iVar1,(QWidget *)0x80015470,pQVar2,(QStringList *)&local_40[0].field0,
             (CSlotInfo *)&local_50,SUB81(local_88,0));
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_40[1]._7_1_ = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_40[1]._7_1_) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_40[1]._7_1_ = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1007e15ae;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1007e15ae:
  FUN_100039a80(&local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_40[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1007e15e7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007e15e7:
  FUN_100039a80(local_40);
  return;
}

