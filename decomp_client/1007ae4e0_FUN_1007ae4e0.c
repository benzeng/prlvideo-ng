
void FUN_1007ae4e0(long param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  Data *local_c0;
  undefined1 local_b8 [48];
  undefined1 local_88 [32];
  QArrayData *local_68;
  QArrayData *local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_29;
  
  local_30 = 0;
  local_34 = 0;
  cVar1 = FUN_1007a7bb0(*(undefined8 *)(param_1 + 0x100),&local_30,&local_34);
  if (cVar1 == '\0') {
    return;
  }
  FUN_1007a7870(local_b8,*(undefined8 *)(param_1 + 0x100),local_30,local_34);
  local_40 = local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_29 = *(int *)local_68 != 0;
    UNLOCK();
  }
  FUN_1007a1cf0(local_88);
  if ((((*(int *)(local_68 + 4) != 0) && (*(long *)(param_1 + 0x118) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) && (*(long *)(param_1 + 0x120) != 0)) {
    cVar1 = FUN_10011a820();
    if (cVar1 == '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x108);
      FUN_10079eac0(&local_c0,*(undefined8 *)(param_1 + 0x110),&local_40,param_2);
      FUN_1007b3bc0(uVar2,&local_40,param_2,&local_c0);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_29 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007ae62f;
        }
        QListData::dispose(local_c0);
      }
    }
    else {
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x118) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x120);
      }
      FUN_10011a850(uVar2);
    }
  }
LAB_1007ae62f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

