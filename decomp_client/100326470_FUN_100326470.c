
bool FUN_100326470(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar1 = FUN_100370280();
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_1003193e0(&local_28);
  }
  lVar2 = FUN_1003704b0(uVar1,&local_28,*(undefined4 *)(param_1 + 0x30));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_1003264f6;
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1003264f6:
  return lVar2 != 0;
}

