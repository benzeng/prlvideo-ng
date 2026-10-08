
uint FUN_100a08910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  QArrayData *local_20;
  undefined1 local_12;
  
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  plVar2 = (long *)FUN_100a083b0(2,param_1,param_2,param_3,param_4,param_5,param_6,&local_20,0);
  iVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2);
  uVar3 = 3;
  if (iVar1 - 1U < 3) {
    uVar3 = iVar1 - 1U;
  }
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar3;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar3;
}

