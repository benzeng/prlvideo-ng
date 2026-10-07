
void FUN_100257600(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined *local_28;
  undefined1 local_1a;
  
  puVar3 = PTR_shared_null_100ba2180;
  local_28 = PTR_shared_null_100ba2180;
  FUN_100023010(param_1,&local_28);
  iVar2 = *(int *)(puVar3 + 0x10);
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 0x10);
      *piVar1 = *piVar1 + -1;
      local_1a = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_1a) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)PTR_shared_null_100ba2180);
  }
  return;
}

