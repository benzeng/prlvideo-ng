
void FUN_10029fc20(CTaskGenericId *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1002c66b0(param_1,param_2,1);
  *(undefined ***)param_1 = &PTR_FUN_102207800;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  param_1[0x4c] = (CTaskGenericId)0x0;
  pvVar2 = operator_new(0x18);
  FUN_10015aab0(&local_38,param_2);
  FUN_10029fea0(pvVar2,&local_38);
  CAbstractTask::setId(param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029fcbc;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10029fcbc:
  uVar3 = FUN_10016f500(param_2);
  FUN_10061abe0(&local_48,uVar3,0);
  iVar1 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  param_1[0x4c] = (CTaskGenericId)(iVar1 != 0 && iVar1 != -0x7ffeefa8);
  return;
}

