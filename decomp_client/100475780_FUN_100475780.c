
long * FUN_100475780(long *param_1,long param_2,char param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  Data *local_30;
  undefined1 local_21;
  
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  local_38 = *(undefined8 *)(param_2 + 0x28);
  FUN_100359270(&local_30,&local_38);
  local_40 = *(undefined8 *)(param_2 + 0x18);
  FUN_100359270(&local_30,&local_40);
  FUN_100359270(&local_30,param_2 + 0xb8);
  local_48 = *(undefined8 *)(param_2 + 0x20);
  FUN_100359270(&local_30,&local_48);
  *param_1 = (long)local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)param_1);
      lVar1 = *param_1;
      lVar2 = (long)*(int *)(lVar1 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != (Data *)(lVar1 + lVar2 * 8)) &&
         (lVar3 = *(int *)(lVar1 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(lVar1 + 0xc))) {
        _memcpy((void *)(lVar1 + 0x10 + lVar2 * 8),
                local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100475875;
    }
    QListData::dispose(local_30);
  }
LAB_100475875:
  if (param_3 != '\0') {
    local_50 = *(undefined8 *)(param_2 + 0xb0);
    FUN_100359270(param_1,&local_50);
  }
  return param_1;
}

