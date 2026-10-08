
undefined1 FUN_1001a97c0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  lVar1 = *(long *)(param_1 + 0x40);
  iVar2 = *(int *)(lVar1 + 8);
  if (*(int *)(lVar1 + 0xc) == iVar2) {
    return 0;
  }
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  if (iVar2 < *(int *)(lVar1 + 0xc)) {
    local_30 = *(QArrayData **)(lVar1 + 0x10 + (long)iVar2 * 8);
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  else {
    local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  uVar3 = FUN_1001a9960(param_1,&local_30);
  iVar2 = FUN_1001aecc0(&local_28,uVar3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001a985e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001a985e:
  if (iVar2 == 0) {
    FUN_100094f70(param_1 + 0x40);
    if (*(int *)local_28 == -1) {
      uVar4 = 0;
    }
    else {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return 0;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,2,8);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return 1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return uVar4;
}

