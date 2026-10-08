
void FUN_100209240(long *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_90;
  long local_88;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if (param_2 == -0x7ffffd8b) {
    FUN_1002082e0(param_1);
    return;
  }
  if (-1 < param_2) {
    if (((param_1[9] != 0) && (*(int *)(param_1[9] + 4) != 0)) &&
       (plVar1 = (long *)param_1[10], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x0001002092b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
    return;
  }
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  FUN_10010fdb0(param_2,0x3abf,lVar2);
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (lVar2 == 0) {
    return;
  }
  if (param_1[5] == 0) {
    return;
  }
  if (*(int *)(param_1[5] + 4) == 0) {
    return;
  }
  if (param_1[6] == 0) {
    return;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("1restartTask()",0xe);
  local_78 = 0x80000000;
  local_80.field7 = 0;
  FUN_100a1c600(local_68,param_1,&local_70,&local_80);
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100209394;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100209394:
  uVar3 = CMessageManager::instance();
  local_88 = *(long *)(lVar2 + 0x10);
  if (local_88 != 0) {
    _PrlHandle_AddRef();
  }
  lVar2 = 0;
  if ((param_1[5] != 0) && (lVar2 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar2 = param_1[6];
  }
  FUN_100188480(&local_90,lVar2);
  if (((param_1[9] == 0) || (*(int *)(param_1[9] + 4) == 0)) || (lVar2 = param_1[10], lVar2 == 0)) {
    lVar2 = 0;
    if ((param_1[7] != 0) && (lVar2 = 0, *(int *)(param_1[7] + 4) != 0)) {
      lVar2 = param_1[8];
    }
  }
  CMessageManager::showMessageBoxForJob(uVar3,&local_88,&local_90,local_68,lVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100209455;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100209455:
  if (local_88 != 0) {
    _PrlHandle_Free();
  }
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
  return;
}

