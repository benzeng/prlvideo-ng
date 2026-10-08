
void FUN_100afa560(long param_1)

{
  char cVar1;
  undefined **local_40 [2];
  Data *local_30;
  undefined1 local_21;
  
  FUN_100dd89f0(local_40,"IOBlockStorageDevice");
  local_40[0] = &PTR_FUN_1022cf110;
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  cVar1 = FUN_100dd8bd0(local_40);
  if ((cVar1 != '\0') &&
     (FUN_100dd8be0(local_40), *(int *)(local_30 + 0xc) != *(int *)(local_30 + 8))) {
    FUN_100b048c0(param_1,&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x150));
  }
  local_40[0] = &PTR_FUN_1022cf110;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100afa5fb;
    }
    QListData::dispose(local_30);
  }
LAB_100afa5fb:
  FUN_100dd8b30(local_40);
  return;
}

