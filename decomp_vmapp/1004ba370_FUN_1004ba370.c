
void FUN_1004ba370(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined1 local_1a;
  
  puVar1 = PTR_shared_null_100ba20d8;
  local_28 = PTR_shared_null_100ba20d8;
  FUN_1004ba0c0(param_1,&local_28);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_1a = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_1a) {
        return;
      }
    }
    if (*(long *)(puVar1 + 0x10) != 0) {
      QMapDataBase::freeTree
                ((QMapNodeBase *)PTR_shared_null_100ba20d8,(int)*(long *)(puVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_100ba20d8);
  }
  return;
}

