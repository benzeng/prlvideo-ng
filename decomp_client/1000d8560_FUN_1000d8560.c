
void FUN_1000d8560(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (*(int *)(param_2 + 0x34) == 1) {
    if (*(int *)(param_2 + 0x30) == 1) {
      return;
    }
  }
  else if ((*(int *)(param_2 + 0x34) == 0) && (*(int *)(param_2 + 0x30) == 0)) {
    return;
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  lVar4 = *(long *)(param_2 + 0x38);
  iVar1 = *(int *)(lVar4 + 8);
  if (iVar1 != *(int *)(lVar4 + 0xc)) {
    puVar3 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
    lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      FUN_10009c430(&local_40,*puVar3);
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  local_48 = *(QArrayData **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  local_50 = *(QArrayData **)(param_2 + 8);
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  FUN_1000b07c0(uVar2,&local_48,&local_50,*(undefined8 *)(param_2 + 0x30),&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d8660;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000d8660:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d8690;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000d8690:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

