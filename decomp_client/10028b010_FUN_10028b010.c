
void FUN_10028b010(CTaskGenericId *param_1,undefined8 param_2)

{
  CTaskGenericId CVar1;
  void *pvVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  undefined1 local_36;
  
  FUN_1002c66b0(param_1,param_2,1);
  *(undefined ***)param_1 = &PTR_FUN_1022065f0;
  pvVar2 = operator_new(0x18);
  FUN_10015aab0(&local_40,param_2);
  FUN_10028b260(pvVar2,&local_40);
  CAbstractTask::setId(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_36 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_36) goto LAB_10028b0a5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10028b0a5:
  uVar3 = FUN_10016f500(param_2);
  CVar1 = (CTaskGenericId)FUN_10061b4d0(uVar3,0x80);
  param_1[0x48] = CVar1;
  return;
}

