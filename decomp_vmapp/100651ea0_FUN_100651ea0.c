
void FUN_100651ea0(long param_1)

{
  char cVar1;
  undefined **local_40 [2];
  Data *local_30;
  undefined1 local_21;
  
  FUN_1007883f0(local_40,"IOBlockStorageDevice");
  local_40[0] = &PTR_FUN_10116d160;
  local_30 = (Data *)PTR_shared_null_100ba2188;
  cVar1 = FUN_1007885d0(local_40);
  if ((cVar1 != '\0') &&
     (FUN_1007885e0(local_40), *(int *)(local_30 + 0xc) != *(int *)(local_30 + 8))) {
    FUN_10065c200(param_1,&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x150));
  }
  local_40[0] = &PTR_FUN_10116d160;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100651f3b;
    }
    QListData::dispose(local_30);
  }
LAB_100651f3b:
  FUN_100788530(local_40);
  return;
}

