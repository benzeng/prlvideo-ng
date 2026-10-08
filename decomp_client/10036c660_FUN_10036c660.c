
undefined8 FUN_10036c660(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar2 = FUN_100152280();
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x40) + 0x20) == 0)) {
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_100188480(&local_28);
  }
  uVar2 = FUN_1001547d0(uVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar2;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar2;
}

