
void FUN_10069b5c0(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  uVar1 = FUN_10018c280(*(undefined8 *)(param_1 + 0x28));
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10031be10(uVar1,&local_20,1);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

