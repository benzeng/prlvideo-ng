
void FUN_10071b470(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined *local_28;
  undefined1 local_1a;
  
  puVar3 = PTR_shared_null_1021e15d0;
  local_28 = PTR_shared_null_1021e15d0;
  FUN_10027d500(param_1,&local_28);
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
    QHashData::free_helper((_func_void_Node_ptr *)PTR_shared_null_1021e15d0);
  }
  return;
}

