
undefined1 FUN_100d724e0(long *param_1)

{
  undefined1 uVar1;
  undefined *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (*(int *)(*param_1 + 4) == 0) {
    return 0;
  }
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  local_28 = (QArrayData *)QString::fromAscii_helper("addexclusion",0xc);
  local_30 = PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_30,param_1);
  uVar1 = FUN_100d713e0(&local_28,&local_30,&local_20);
  FUN_100039a80(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d7257c;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d7257c:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}

