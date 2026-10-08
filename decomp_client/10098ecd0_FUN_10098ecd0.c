
void FUN_10098ecd0(long param_1,long *param_2)

{
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (*(int *)(*param_2 + 0xc) == *(int *)(*param_2 + 8)) {
    FUN_10098ee30(param_1,0);
    return;
  }
  if ((((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
      (*(long *)(param_1 + 0x38) != 0)) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x28) + 9) & 0x80) != 0)) {
    return;
  }
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10098eff0(param_1,param_2,&local_20,&local_28);
  FUN_10098f480(param_1,&local_20,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10098ed79;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10098ed79:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

