
uint FUN_100a08720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1dc4d51);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  plVar2 = (long *)FUN_100a083b0(2,param_1,param_2,param_3,param_4,&local_40,&local_48,&local_50,0);
  iVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2);
  uVar3 = 3;
  if (iVar1 - 1U < 3) {
    uVar3 = iVar1 - 1U;
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a087ec;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a087ec:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0881c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a0881c:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar3;
}

